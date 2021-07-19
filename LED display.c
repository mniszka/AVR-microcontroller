/*
 * main.c
 *
 *  Created on: 21 lut 2020
 *      Author: Aga
 */


#include <avr/io.h>
//#define F_CPU 8000000
#include <util/delay.h>
int main()
{
int8_t i;
unsigned char liczba_LED[11] = {0x3F, 0x6, 0x6, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x7, 0x7F, 0x6F};

:
DDRB |= (1<<PB0)| (1<<PB1) | (1<<PB2) | (1<<PB3) | (1<<PB4) | (1<<PB5) | (1<<PB6); //output
DDRC |= (1<<PC0) | (1<<PC1); //output


PORTC |= (1<<PC0) | (1<<PC1); //PC0 and PC1 is +

for(;;)
{

for(i=0; i<=10; i++) //digits 0 - 9
{
PORTB = liczba_LED[i];
//czekaj 1/4 sekundy
_delay_ms(250);
}

for(i=10; i>=0; i--) //digits 9 - 0
{
PORTB = liczba_LED[i];

//czekaj ¼ sekundy
_delay_ms(250);
}
}
return 0;
}
