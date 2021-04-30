
#ifndef USART_H_INCLUDED
#define USART_H_INCLUDED
/**
 * @file usart.h
 * @author Bharani Surya S ()
 * @brief To print value of temperature
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Function Definitions
 */

/**
 * @brief  print the sensed value
 * 
 * @param state print sesnse value
 */
void USARTInit(uint16_t);
char USARTREADCHAR();
void USARTWriteChar(char);
#endif // USART_H_INCLUDED
