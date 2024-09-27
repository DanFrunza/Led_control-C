#define F_CPU 16000000UL  
#include <avr/io.h>       
#include <util/delay.h>   

int main(void) {
	
	DDRD |= (1 << PD3) | (1 << PD4) | (1 << PD5) | (1 << PD6) | (1 << PD7);

	while (1) {
		
		PORTD |= (1 << PD3);  
		_delay_ms(500);       
		PORTD &= ~(1 << PD3); 
		PORTD |= (1 << PD4);  
		_delay_ms(500);
		PORTD &= ~(1 << PD4);

		PORTD |= (1 << PD5);  
		_delay_ms(500);
		PORTD &= ~(1 << PD5);

		PORTD |= (1 << PD6);  
		_delay_ms(500);
		PORTD &= ~(1 << PD6);

		PORTD |= (1 << PD7);  
		_delay_ms(500);
		PORTD &= ~(1 << PD7);
	}

	return 0;
}
