/*
 * led_dice.c
 *
 * Created: 16/12/2023 12:46:07 PM
 *  Author: Owais
 */ 

#include "functions.h"
	
void disable_ADC(void){
	
	ADCSRA &= ~(1 << ADEN); 	
}
 void init_led_dice_ddr(void){
	 
	 DDRD |= (1 << A);
	 DDRB |= (1 << B) | (1 << C) | (1 << D) | (1 << E) | (1 << F) | (1 << G);

}
 
void display_1(void){
	
	PORTB |= (1 << B);
	PORTB |= (1 << C);
	
	_delay_ms(DIGIT_DELAY_TIME);
	
	PORTB = 0;
	PORTD = 0;
	
}
void display_2(void){
	
	PORTD |= (1 << A);
	PORTB |= (1 << B) | (1 << G) | (1 << E) | (1 << D);
	
	_delay_ms(DIGIT_DELAY_TIME);
	
	PORTB = 0;
	PORTD = 0;
	
}

void display_3(void){
	
	PORTD |= (1 << A);
	PORTB |= (1 << B) | (1 << C) | (1 << G) | (1 << D);
	
	_delay_ms(DIGIT_DELAY_TIME);
	
	PORTB = 0;
	PORTD = 0;
	
}

void display_4(void){
	
	PORTB |= (1 << F)| (1 << G) | (1 << B) | (1 << C);
	
	_delay_ms(DIGIT_DELAY_TIME);
	
	PORTB = 0;
	
}

void display_5(void){
	
	PORTD |= (1 << A);
	PORTB |= (1 << F)| (1 << G) | (1 << C) | (1 << D);
	
	_delay_ms(DIGIT_DELAY_TIME);
	
	PORTD = 0;
	PORTB = 0;
}

void display_6(void){
	
	PORTD |= (1 << A);
	PORTB |= (1 << F) | (1 << G) | (1 << C) | (1 << D) | (1 << E);
	
	_delay_ms(DIGIT_DELAY_TIME);
	
	PORTB = 0;
	PORTD = 0;
	
}

