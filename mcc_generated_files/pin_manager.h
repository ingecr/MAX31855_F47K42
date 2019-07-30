/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC18F47K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ON      0
#define OFF     1 

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set LED_OP aliases
#define LED_OP_TRIS                 TRISDbits.TRISD1
#define LED_OP_LAT                  LATDbits.LATD1
#define LED_OP_PORT                 PORTDbits.RD1
#define LED_OP_WPU                  WPUDbits.WPUD1
#define LED_OP_OD                   ODCONDbits.ODCD1
#define LED_OP_ANS                  ANSELDbits.ANSELD1
#define LED_OP_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LED_OP_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LED_OP_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LED_OP_GetValue()           PORTDbits.RD1
#define LED_OP_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LED_OP_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define LED_OP_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define LED_OP_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define LED_OP_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define LED_OP_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define LED_OP_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define LED_OP_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set SS aliases
#define SS_TRIS                 TRISDbits.TRISD4
#define SS_LAT                  LATDbits.LATD4
#define SS_PORT                 PORTDbits.RD4
#define SS_WPU                  WPUDbits.WPUD4
#define SS_OD                   ODCONDbits.ODCD4
#define SS_ANS                  ANSELDbits.ANSELD4
#define SS_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define SS_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define SS_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define SS_GetValue()           PORTDbits.RD4
#define SS_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define SS_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define SS_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define SS_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define SS_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define SS_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define SS_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define SS_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/