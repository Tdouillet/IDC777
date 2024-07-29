/*
 * File:   extra_fct.c
 * Author: t.douillet
 *
 * Created on July 24, 2024, 1:40 PM
 */


#include "xc.h"
#include "mcc_generated_files/uart1.h"
#include <string.h>

uint8_t device_address[];
uint8_t status[] = "STATUS";
uint8_t play[] = {'M','U','S','I','C',' ','1','1',' ','P','L','A','Y'};
uint8_t pause[] = {'M','U','S','I','C',' ','1','1',' ','P','A','U','S','E'};
uint8_t pair[] = "PAIR";
uint8_t list[] = "LIST";
uint8_t a2dp[] = "A2DP";
uint8_t vol_up[] = {'V','O','L','U','M','E',' ','1','1',' ','U','P'};
uint8_t vol_down[] = {'V','O','L','U','M','E',' ','1','1',' ','D','O','W','N'};

extern uint8_t uart_buf[];
extern uint8_t uart_index;

void Status(void){
    
    uart_index = 0;
    for (uint8_t i = 0; i<sizeof(status);i++){
        uint8_t ab = status[i];
        UART1_Write(status[i]);
    }
    UART1_Write(0x0D);
}

void Play(void){
    
    uart_index = 0;
    for (uint8_t i = 0; i<sizeof(play);i++){
        uint8_t ab = play[i];
        UART1_Write(play[i]);
    }
    UART1_Write(0x0D);
}

void Pause(void){
    
    uart_index = 0;
    for (uint8_t i = 0; i<sizeof(pause);i++){
        UART1_Write(pause[i]);
    }
    UART1_Write(0x0D);
}

void Pair(uint8_t address[]){
    
    uart_index = 0;
//    address = Get_Address();
    for (uint8_t i = 0; i<sizeof(pair);i++){
        UART1_Write(pair[i]);
    }
    UART1_Write(' ');
    for (uint8_t i = 0; i<sizeof(address);i++){
        UART1_Write(address[i]);
    }
    UART1_Write(0x0D);
}

//uint8_t Get_Address(void){
//    
//    uart_index = 0;
//    uint8_t address[];
//    for (uint8_t i = 0; i<sizeof(list);i++){
//        UART1_Write(list[i]);
//    }
//    UART1_Write(0x0D);
//    for (uint8_t i = 7; i<19; i++){
//        address[i-7] = uart_buf[i];
//    }
//    return address;
//    
//}

void Vol_Up(void){
    
    uart_index = 0;
    for (uint8_t i = 0; i<sizeof(vol_up);i++){
        UART1_Write(vol_up[i]);
    }
    UART1_Write(0x0D);
    
}

void Vol_Down(void){
    
    uart_index = 0;
    for (uint8_t i = 0; i<sizeof(vol_down);i++){
        UART1_Write(vol_down[i]);
    }
    UART1_Write(0x0D);
    
}