#include <avr/io.h>
#include <util/delay.h>


#define LED0 (1<<PB0)
#define LED1 (1<<PB1)


int main (){
//linie PB0 i PB1 wyjściowe
	DDRB |= LED0;
	DDRB |= LED1;

//naprzemienne zapalanie i gaszenie diody LED
	for(;;){
		PORTB &= ~LED0; //zeruj
		_delay_ms(260);
		PORTB |= LED0; //ustaw bit
		_delay_ms(260);

	}

	return 0;
}
