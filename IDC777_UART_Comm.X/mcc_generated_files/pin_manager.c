/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.c

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for PIN MANAGER.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  PIC24FJ512GU410
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB 	          :  MPLAB X v6.05
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/


/**
    Section: Includes
*/

#include <xc.h>
#include <stdio.h>
#include "pin_manager.h"

/**
 Section: File specific functions
*/
void (*BP4_InterruptHandler)(void) = NULL;
void (*BP6_InterruptHandler)(void) = NULL;
void (*BP3_InterruptHandler)(void) = NULL;

/**
 Section: Driver Interface Function Definitions
*/
void PIN_MANAGER_Initialize (void)
{
    /****************************************************************************
     * Setting the Output Latch SFR(s)
     ***************************************************************************/
    LATA = 0x0000;
    LATB = 0x0000;
    LATC = 0x0000;
    LATD = 0x0000;
    LATE = 0x0000;
    LATF = 0x0000;
    LATG = 0x0000;
    LATH = 0x0000;

    /****************************************************************************
     * Setting the GPIO Direction SFR(s)
     ***************************************************************************/
    TRISA = 0xC6FF;
    TRISB = 0xFFFF;
    TRISC = 0x701E;
    TRISD = 0xFDFF;
    TRISE = 0x03FF;
    TRISF = 0x31BF;
    TRISG = 0xF3CF;
    TRISH = 0x0001;

    /****************************************************************************
     * Setting the Weak Pull Up and Weak Pull Down SFR(s)
     ***************************************************************************/
    CNPDA = 0x0000;
    CNPDB = 0x0000;
    CNPDC = 0x0000;
    CNPDD = 0x0000;
    CNPDE = 0x0000;
    CNPDF = 0x0000;
    CNPDG = 0x0000;
    CNPDH = 0x0000;
    CNPUA = 0x0000;
    CNPUB = 0x0000;
    CNPUC = 0x0000;
    CNPUD = 0x0000;
    CNPUE = 0x0000;
    CNPUF = 0x0000;
    CNPUG = 0x0000;
    CNPUH = 0x0000;
    IOCPDA = 0x0000;
    IOCPDB = 0x0000;
    IOCPDC = 0x0000;
    IOCPDD = 0x0000;
    IOCPDE = 0x0000;
    IOCPDF = 0x0000;
    IOCPDG = 0x0000;
    IOCPDH = 0x0000;
    IOCPUA = 0x0000;
    IOCPUB = 0x0000;
    IOCPUC = 0x0000;
    IOCPUD = 0x0000;
    IOCPUE = 0x0000;
    IOCPUF = 0x0000;
    IOCPUG = 0x0000;
    IOCPUH = 0x0000;

    /****************************************************************************
     * Setting the Open Drain SFR(s)
     ***************************************************************************/
    ODCA = 0x0000;
    ODCB = 0x0000;
    ODCC = 0x0000;
    ODCD = 0x0000;
    ODCE = 0x0000;
    ODCF = 0x0000;
    ODCG = 0x0000;
    ODCH = 0x0000;

    /****************************************************************************
     * Setting the Analog/Digital Configuration SFR(s)
     ***************************************************************************/
    ANSA = 0x00C0;
    ANSB = 0xFF3F;
    ANSC = 0x0010;
    ANSD = 0x0C40;
    ANSE = 0x0218;
    ANSG = 0x03C0;
    
    /****************************************************************************
     * Set the PPS
     ***************************************************************************/
    __builtin_write_OSCCONL(OSCCON & 0xbf); // unlock PPS

    RPOR2bits.RP4R = 0x0003;    //RD9->UART1:U1TX
    RPINR18bits.U1RXR = 0x0002;    //RD8->UART1:U1RX

    __builtin_write_OSCCONL(OSCCON | 0x40); // lock PPS
    
    /****************************************************************************
     * Interrupt On Change: negative
     ***************************************************************************/
    IOCNDbits.IOCND13 = 1;    //Pin : RD13
    IOCNDbits.IOCND7 = 1;    //Pin : RD7
    IOCNGbits.IOCNG15 = 1;    //Pin : RG15
    /****************************************************************************
     * Interrupt On Change: flag
     ***************************************************************************/
    IOCFDbits.IOCFD13 = 0;    //Pin : RD13
    IOCFDbits.IOCFD7 = 0;    //Pin : RD7
    IOCFGbits.IOCFG15 = 0;    //Pin : RG15
    /****************************************************************************
     * Interrupt On Change: config
     ***************************************************************************/
    PADCONbits.IOCON = 1;    //Config for PORTG
    
    /* Initialize IOC Interrupt Handler*/
    BP4_SetInterruptHandler(&BP4_CallBack);
    BP6_SetInterruptHandler(&BP6_CallBack);
    BP3_SetInterruptHandler(&BP3_CallBack);
    
    /****************************************************************************
     * Interrupt On Change: Interrupt Enable
     ***************************************************************************/
    IFS1bits.IOCIF = 0; //Clear IOCI interrupt flag
    IEC1bits.IOCIE = 1; //Enable IOCI interrupt
}

void __attribute__ ((weak)) BP4_CallBack(void)
{

}

void __attribute__ ((weak)) BP6_CallBack(void)
{

}

void __attribute__ ((weak)) BP3_CallBack(void)
{

}

void BP4_SetInterruptHandler(void (* InterruptHandler)(void))
{ 
    IEC1bits.IOCIE = 0; //Disable IOCI interrupt
    BP4_InterruptHandler = InterruptHandler; 
    IEC1bits.IOCIE = 1; //Enable IOCI interrupt
}

void BP4_SetIOCInterruptHandler(void *handler)
{ 
    BP4_SetInterruptHandler(handler);
}

void BP6_SetInterruptHandler(void (* InterruptHandler)(void))
{ 
    IEC1bits.IOCIE = 0; //Disable IOCI interrupt
    BP6_InterruptHandler = InterruptHandler; 
    IEC1bits.IOCIE = 1; //Enable IOCI interrupt
}

void BP6_SetIOCInterruptHandler(void *handler)
{ 
    BP6_SetInterruptHandler(handler);
}

void BP3_SetInterruptHandler(void (* InterruptHandler)(void))
{ 
    IEC1bits.IOCIE = 0; //Disable IOCI interrupt
    BP3_InterruptHandler = InterruptHandler; 
    IEC1bits.IOCIE = 1; //Enable IOCI interrupt
}

void BP3_SetIOCInterruptHandler(void *handler)
{ 
    BP3_SetInterruptHandler(handler);
}

/* Interrupt service routine for the IOCI interrupt. */
void __attribute__ (( interrupt, no_auto_psv )) _IOCInterrupt ( void )
{
    if(IFS1bits.IOCIF == 1)
    {
        if(IOCFDbits.IOCFD13 == 1)
        {
            if(BP4_InterruptHandler) 
            { 
                BP4_InterruptHandler(); 
            }
            
            IOCFDbits.IOCFD13 = 0;  //Clear flag for Pin - RD13

        }
        
        if(IOCFDbits.IOCFD7 == 1)
        {
            if(BP6_InterruptHandler) 
            { 
                BP6_InterruptHandler(); 
            }
            
            IOCFDbits.IOCFD7 = 0;  //Clear flag for Pin - RD7

        }
        
        if(IOCFGbits.IOCFG15 == 1)
        {
            if(BP3_InterruptHandler) 
            { 
                BP3_InterruptHandler(); 
            }
            
            IOCFGbits.IOCFG15 = 0;  //Clear flag for Pin - RG15

        }
        
        
        // Clear the flag
        IFS1bits.IOCIF = 0;
    }
}

