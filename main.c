/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC18F47K42
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/spi1.h"
#define DATASIZE_3885 4
#define DATASIZE_6675 2

#define _XTAL_FREQ 16000000

uint8_t MAX3855_dataBuffer[DATASIZE_3885];
uint8_t MAX6675_dataBuffer[DATASIZE_6675];

uint16_t temperature_internal      = 0;
uint16_t temperature_tcouple  = 0;

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    //SS_LAT = ON;
    while (1)
    {
        // Add your application code
        //SPI1_Exchange8bitBuffer(NULL, DATASIZE_3885,&MAX3855_dataBuffer[0]);
        //SPI1_Exchange8bitBuffer(NULL, DATASIZE_6675,&MAX6675_dataBuffer[0]);
        //SPI1TCNTL = 4;
        SS_LAT = ON;
        for(int i = 0; i < DATASIZE_3885 ; i++)
        {   
            MAX3855_dataBuffer[i] = SPI1_Exchange8bit();

            //bytesWritten++;
        }
        SS_LAT = OFF;
        
        temperature_tcouple = MAX3855_dataBuffer[0];
        temperature_tcouple = ((temperature_tcouple << 6) | (MAX3855_dataBuffer[1]>>2)) >> 2;
        
        temperature_internal = MAX3855_dataBuffer[2];
        temperature_internal = ((temperature_internal << 4) | (MAX3855_dataBuffer[3]>>4)) >> 4;
        
        __delay_ms(100);
        LED_OP_Toggle();
    }
}
/**
 End of File
*/