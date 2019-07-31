/*
 * File:   MAX31855_F47k42.c
 * Author: hectorcruz
 *
 * Created on July 31, 2019, 9:34 AM
 */


#include "xc.h"
#include "MAX31855_F47k42.h"

#define MAX3855_BYTES 4


void get_MAX31855_temperatures(uint16_t* thermocupleTemp, uint16_t* internalTemp){
        uint8_t MAX3855_dataBuffer[MAX3855_BYTES];
        SS_LAT = ON;
        for(int i = 0; i < MAX3855_BYTES ; i++)
        {   
            MAX3855_dataBuffer[i] = SPI1_Exchange8bit();
        }
        SS_LAT = OFF;
        
        *thermocupleTemp = MAX3855_dataBuffer[0];
        *thermocupleTemp = ((*thermocupleTemp << 4) | (MAX3855_dataBuffer[1]>>4));
        
        *internalTemp = MAX3855_dataBuffer[2];
        
        
}
