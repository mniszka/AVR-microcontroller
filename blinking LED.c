/*
 * main.c
 *
 *  Created on: 14 lip 2021
 *      Author: Aga
 */
#include <avr/io.h>
#include <util/delay.h>
#define LED_0 (1<<PD0)
#define LED_1 (1<<PD1)
#define LED_2 (1<<PD2)
#define LED_3 (1<<PD3)
#define delay (_delay_ms(1000))

int main(){
	DDRD |= (1<<PD0) | (1<<PD1) | (1<<PD2) | (1<<PD3);
	for(;;){
		PORTD |= LED_0;
		delay;
		PORTD  ^= LED_0;
		delay;
		PORTD |= LED_1;
		delay;
		PORTD ^= LED_1;
		delay;
		PORTD |= LED_2;
		delay;
		PORTD ^= LED_2;
		delay;
		PORTD|= LED_3;
		delay;
		PORTD ^= LED_3;
		delay;
	}

}

