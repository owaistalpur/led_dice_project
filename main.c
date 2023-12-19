/*
 * led_dice_project.c
 *
 * Created: 16/12/2023 12:39:00 PM
 * Author : Owais
 */ 

/* Includes */
#include "functions.h"


/*****************************
	
		Main Function 
	
*****************************/
int main(void)
{
	
	/* Init DDRs */
	init_led_dice_ddr();
	disable_ADC();
	DDRD &= ~(1 << INPUT_PIN);
	
	
	srand(time(NULL));	
	
	/* Define randomNumber variable to store the random number */
	uint8_t randomNumber = 0;
	
	/* Function pointer to hold the display functions */
	void (*fptr_display_digits[6])(void) = {display_1, display_2, display_3, display_4, display_5, display_6};
		
	/* Replace with your application code */
    while (1) 
    {
		
		if((PIND & (1 << INPUT_PIN))){
	
			randomNumber = rand() % 6;
			(*fptr_display_digits[randomNumber])();
				
			_delay_ms(10);

		}
		
    }
}

