/**
 * @file project_main.c
 * @author Bharani Surya S ()
 * @brief Heat sensing device
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include<util/delay.h>
#include "usart.h" //activity 4
#include "act11.h"
#include "act22.h"
#include "act33.h"
int main(void)
{
 uint16_t temp;
 act1();
 Activity3();

InitADC();

USARTInit(103);
int i;
while(1)
{
    if((PINB & (1 << PB3)) &&(PINB & (1 << PB4)) )
        {
            PORTB|=(1<<PB0);
            _delay_ms(2000);
        }
       else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(2000);
        }

   temp=ReadADC(0);
    _delay_ms(200);


      if(temp<=200)
{
    OCR0A = 51;
     _delay_ms(2000);
}
else if(temp>=210&&temp<=500)
{
    OCR0A = 102;
     _delay_ms(2000);
}
else if(temp>=510&&temp<=700)
{
    OCR0A = 178;
     _delay_ms(2000);
}
else
{
    OCR0A = 242;
     _delay_ms(2000);
}


    if(temp<=200)
    {
        unsigned char op1[]="Temperature is 20°C";
        i=0;
        while(op1[i]!=0)
        {
            USARTWriteChar(op1[i]);
            i++;
        }
    }
    else if(temp>=210&&temp<=500)
    {
        unsigned char op2[]="Temperature is 25°C";
        i=0;
        while(op2[i]!=0)
        {
            USARTWriteChar(op2[i]);
            i++;
        }
    }
     else if(temp>=510&&temp<=700)
    {
        unsigned char op3[]="Temperature is 29°C";
        i=0;
        while(op3[i]!=0)
        {
            USARTWriteChar(op3[i]);
            i++;
        }
    }
     else
    {
        unsigned char op4[]="Temperature is 33°C";
        i=0;
        while(op4[i]!=0)
        {
            USARTWriteChar(op4[i]);
            i++;
        }
    }
}

    return 0;
}