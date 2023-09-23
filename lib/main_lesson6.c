/*
 * Lesson_6.c
 *
 * Created: 23.09.2021 19:31:33
 * Author : Дмитрий
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0b11111111;
	PORTD = 0b11100000;
	
	
    while (1) 
    {
		
		/*
		PORTD = 0b11100000;
		_delay_ms(1500);
		PORTD = PORTD | 0b10100011;
		_delay_ms(1500);
		*/
		
		/*
		PORTD = 0b11100000;
		_delay_ms(1500);
		PORTD = PORTD & 0b10100011;
		_delay_ms(1500);
		*/
		
		/*
		PORTD = 0b11100000;
		_delay_ms(1500);
		PORTD = PORTD ^ 0b10100011;
		_delay_ms(1500);
		*/
		
		/*
		PORTD = 0b11100000;
		_delay_ms(1500);
		PORTD = ~PORTD;
		_delay_ms(1500);
		*/
		
		/*
		PORTD = 0b11100000;
		_delay_ms(1500);
		PORTD = PORTD >> 7;
		_delay_ms(1500);
		*/
		
		/*
		PORTD = 0b00011010; //01101000 
		_delay_ms(1500);
		PORTD = PORTD << 2;
		_delay_ms(1500);
		*/
		
		/*
		PORTD = 0b11100000;
		_delay_ms(1500);
		//PORTD = PORTD | 0b00000010;
		//PORTD |= 0b00000010;
		//PORTD |= (1<<4);
		PORTD |= (1<<3) | (1<<2) | (1<<0);
		//PORTD |= 2;
		_delay_ms(1500);
		*/
		
		/*
		PORTD = 0b11100000;
		_delay_ms(1500);
		//PORTD &= ~(1<<6);
		PORTD &= ~((1<<7) | (1<<5));
		_delay_ms(1500);
		*/
		/*
		PORTD = 0b11100000;
		_delay_ms(1500);
		PORTD ^= (1<<6) | (1<<3) | (1<<1);
		_delay_ms(1500);
		*/
		/*
		PORTD |= (1<<3);
		_delay_ms(300);
		PORTD &= ~(1<<3);
		_delay_ms(300);
		*/
		
		PORTD ^= (1<<3);
		_delay_ms(300);
		
    }
}

