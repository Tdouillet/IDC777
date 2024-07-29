/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

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

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RD13, high using LATD13.

  @Description
    Sets the GPIO pin, RD13, high using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD13 high (1)
    BP4_SetHigh();
    </code>

*/
#define BP4_SetHigh()          (_LATD13 = 1)
/**
  @Summary
    Sets the GPIO pin, RD13, low using LATD13.

  @Description
    Sets the GPIO pin, RD13, low using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD13 low (0)
    BP4_SetLow();
    </code>

*/
#define BP4_SetLow()           (_LATD13 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD13, using LATD13.

  @Description
    Toggles the GPIO pin, RD13, using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD13
    BP4_Toggle();
    </code>

*/
#define BP4_Toggle()           (_LATD13 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD13.

  @Description
    Reads the value of the GPIO pin, RD13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD13
    postValue = BP4_GetValue();
    </code>

*/
#define BP4_GetValue()         _RD13
/**
  @Summary
    Configures the GPIO pin, RD13, as an input.

  @Description
    Configures the GPIO pin, RD13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD13 as an input
    BP4_SetDigitalInput();
    </code>

*/
#define BP4_SetDigitalInput()  (_TRISD13 = 1)
/**
  @Summary
    Configures the GPIO pin, RD13, as an output.

  @Description
    Configures the GPIO pin, RD13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD13 as an output
    BP4_SetDigitalOutput();
    </code>

*/
#define BP4_SetDigitalOutput() (_TRISD13 = 0)
/**
  @Summary
    Sets the GPIO pin, RD7, high using LATD7.

  @Description
    Sets the GPIO pin, RD7, high using LATD7.

  @Preconditions
    The RD7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD7 high (1)
    BP6_SetHigh();
    </code>

*/
#define BP6_SetHigh()          (_LATD7 = 1)
/**
  @Summary
    Sets the GPIO pin, RD7, low using LATD7.

  @Description
    Sets the GPIO pin, RD7, low using LATD7.

  @Preconditions
    The RD7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD7 low (0)
    BP6_SetLow();
    </code>

*/
#define BP6_SetLow()           (_LATD7 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD7, using LATD7.

  @Description
    Toggles the GPIO pin, RD7, using LATD7.

  @Preconditions
    The RD7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD7
    BP6_Toggle();
    </code>

*/
#define BP6_Toggle()           (_LATD7 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD7.

  @Description
    Reads the value of the GPIO pin, RD7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD7
    postValue = BP6_GetValue();
    </code>

*/
#define BP6_GetValue()         _RD7
/**
  @Summary
    Configures the GPIO pin, RD7, as an input.

  @Description
    Configures the GPIO pin, RD7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD7 as an input
    BP6_SetDigitalInput();
    </code>

*/
#define BP6_SetDigitalInput()  (_TRISD7 = 1)
/**
  @Summary
    Configures the GPIO pin, RD7, as an output.

  @Description
    Configures the GPIO pin, RD7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD7 as an output
    BP6_SetDigitalOutput();
    </code>

*/
#define BP6_SetDigitalOutput() (_TRISD7 = 0)
/**
  @Summary
    Sets the GPIO pin, RG15, high using LATG15.

  @Description
    Sets the GPIO pin, RG15, high using LATG15.

  @Preconditions
    The RG15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG15 high (1)
    BP3_SetHigh();
    </code>

*/
#define BP3_SetHigh()          (_LATG15 = 1)
/**
  @Summary
    Sets the GPIO pin, RG15, low using LATG15.

  @Description
    Sets the GPIO pin, RG15, low using LATG15.

  @Preconditions
    The RG15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG15 low (0)
    BP3_SetLow();
    </code>

*/
#define BP3_SetLow()           (_LATG15 = 0)
/**
  @Summary
    Toggles the GPIO pin, RG15, using LATG15.

  @Description
    Toggles the GPIO pin, RG15, using LATG15.

  @Preconditions
    The RG15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RG15
    BP3_Toggle();
    </code>

*/
#define BP3_Toggle()           (_LATG15 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RG15.

  @Description
    Reads the value of the GPIO pin, RG15.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RG15
    postValue = BP3_GetValue();
    </code>

*/
#define BP3_GetValue()         _RG15
/**
  @Summary
    Configures the GPIO pin, RG15, as an input.

  @Description
    Configures the GPIO pin, RG15, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG15 as an input
    BP3_SetDigitalInput();
    </code>

*/
#define BP3_SetDigitalInput()  (_TRISG15 = 1)
/**
  @Summary
    Configures the GPIO pin, RG15, as an output.

  @Description
    Configures the GPIO pin, RG15, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG15 as an output
    BP3_SetDigitalOutput();
    </code>

*/
#define BP3_SetDigitalOutput() (_TRISG15 = 0)

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC24FJ512GU410
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);

/**
  @Summary
    Callback for BP4 Pin.

  @Description
    This routine is callback for BP4 Pin

  @Param
    None.

  @Returns
    None
 
 
  @Example 
    <code>
        BP4_SetInterruptHandler(&BP4_CallBack);
    </code>
*/
void BP4_CallBack(void);

/**
  @Summary
    Callback for BP6 Pin.

  @Description
    This routine is callback for BP6 Pin

  @Param
    None.

  @Returns
    None
 
 
  @Example 
    <code>
        BP6_SetInterruptHandler(&BP6_CallBack);
    </code>
*/
void BP6_CallBack(void);

/**
  @Summary
    Callback for BP3 Pin.

  @Description
    This routine is callback for BP3 Pin

  @Param
    None.

  @Returns
    None
 
 
  @Example 
    <code>
        BP3_SetInterruptHandler(&BP3_CallBack);
    </code>
*/
void BP3_CallBack(void);


/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        BP4_SetInterruptHandler(&BP4_CallBack);
    </code>
*/
void BP4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        BP4_SetIOCInterruptHandler(&BP4_CallBack);
    </code>
*/
void __attribute__((deprecated("\nThis will be removed in future MCC releases. \nUse BP4_SetInterruptHandler instead."))) BP4_SetIOCInterruptHandler(void *handler);

/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        BP6_SetInterruptHandler(&BP6_CallBack);
    </code>
*/
void BP6_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        BP6_SetIOCInterruptHandler(&BP6_CallBack);
    </code>
*/
void __attribute__((deprecated("\nThis will be removed in future MCC releases. \nUse BP6_SetInterruptHandler instead."))) BP6_SetIOCInterruptHandler(void *handler);

/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        BP3_SetInterruptHandler(&BP3_CallBack);
    </code>
*/
void BP3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        BP3_SetIOCInterruptHandler(&BP3_CallBack);
    </code>
*/
void __attribute__((deprecated("\nThis will be removed in future MCC releases. \nUse BP3_SetInterruptHandler instead."))) BP3_SetIOCInterruptHandler(void *handler);


#endif
