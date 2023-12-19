/*
 * functions.h
 *
 * Created: 16/12/2023 12:43:55 PM
 *  Author: Owais
 */ 


#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#undef F_CPU

#ifndef F_CPU
	#define F_CPU 16000000UL
#endif

/* Standard C Library Includes Start */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <time.h>
/* Standard C Library Includes End */

/* AVR Library Includes Start */
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <avr/eeprom.h>
/* AVR Library Includes End */

/* Defines Start */
#define A PORTD7
#define B PORTB0
#define C PORTB1
#define D PORTB2
#define E PORTB3
#define F PORTB4
#define G PORTB5

#define DIGIT_DELAY_TIME 1250
#define INPUT_PIN PORTD6

/* Function Definitions Start */
void init_led_dice_ddr(void);
void disable_ADC(void);
void display_1(void);
void display_2(void);
void display_3(void);
void display_4(void);
void display_5(void);
void display_6(void);


#endif /* FUNCTIONS_H_ */