#ifndef ACT22_H_INCLUDED
#define ACT22_H_INCLUDED

/**
 * @file act22.h
 * @author Bharani Surya S ()
 * @brief get input from temperature sensor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Function Definitions
 */

/**
 * @brief gets analog value of temperature and converts it to digital
 * 
 * @param state input voltage of temp sensor
 */
void InitADC();
uint16_t ReadADC(uint8_t );

#endif // ACT22_H_INCLUDED
