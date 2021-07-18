#include<avr/io.h>
#include <util/delay.h>

/*
przycisk na PC5 do minusa
diody na PD0, PD1, PD2, PD3 do minusa
*/

int main(){

DDRC &= ~(1<<PC5);//PC5 ustawiamy jako wejście- zerujemy
DDRD |= (1<<PD0); //linie wyjściowe, stan wysoki

PORTC |= (1<<PC5); //wysoki stan logiczny, czyli +
PORTD &= ~(1<<PD0) ; // zeruję

for(;;){
if (!(PINC & (1<<PC5))){ //jeżeli na PC5 jest stan niski (- baterii)
	_delay_ms(80);
	if(!(PINC & (1<<PC5))){ //jeżeli stan niski
	PORTD ^= (1<<PD0);//zmień stan
	}
}
}
return 0;
}
