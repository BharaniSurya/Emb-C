#include <avr/io.h>
#include <util/delay.h>

int act1()
{

    DDRB|=(1<<PB0);
    PORTB=0X00;

    return 0;
}
