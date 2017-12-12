/*Microcontrollers Atmega8515/162 pin out configuration
*/
#ifndef AVR_PINOUT_H
#define AVR_PINOUT_H

#include"Microcontrollers-Atmega8515-162-pin-out-configuration.h"
#else
#include"Arduino.h"
#include<avr/io.h>
#include<avr/signal.h>

/*Interface of Port B*/
#define MCU_SPI_PBDI_PORTB_PB0 0; //
#define MCU_SPI_PBDI_PORTB_PB1 1; //
#define MCU_SPI_PBDI_PORTB_PB2 2; //
#define MCU_SPI_PBDI_PORTB_PB3 3; //
#define MCU_SPI_PBDI_PORTB_PB4 4; //
#define MCU_SPI_PBDI_PORTB_PB5 5; //
#define MCU_SPI_PBDI_PORTB_PB6 6; //
#define MCU_SPI_PBDI_PORTB_PB7 7; //

/*Interface of Port D*/
#define MCU_USART_PDDI_PORTD_PD0 8; //
#define MCU_USART_PDDI_PORTD_PD1 9; //
#define MCU_USART_PDDI_PORTD_PD2 10; //
#define MCU_USART_PDDI_PORTD_PD3 11; //
#define MCU_USART_PDDI_PORTD_PD4 12; //
#define MCU_USART_PDDI_PORTD_PD5 13; //
#define MCU_USART_PDDI_PORTD_PD6 14; //
#define MCU_USART_PDDI_PORTD_PD7 15; //

/*Interface of Port C*/
#define MCU_PCDI_PORTC_PC0 16; //
#define MCU_PCDI_PORTC_PC1 17; //
#define MCU_PCDI_PORTC_PC2 18; //
#define MCU_PCDI_PORTC_PC3 19; //
#define MCU_PCDI_PORTC_PC4 20; //
#define MCU_PCDI_PORTC_PC5 21; //
#define MCU_PCDI_PORTC_PC6 22; //
#define MCU_PCDI_PORTC_PC7 23; //

/*Interface of Port A*/
#define MCU_PADI_PORTA_PA0 24; //
#define MCU_PADI_PORTA_PA1 25; //
#define MCU_PADI_PORTA_PA2 26; //
#define MCU_PADI_PORTA_PA3 27; //
#define MCU_PADI_PORTA_PA4 28; //
#define MCU_PADI_PORTA_PA5 29; //
#define MCU_PADI_PORTA_PA6 30; //
#define MCU_PADI_PORTA_PA7 31; //

/*Interface of Port E*/
#define MCU_PEDI_PORTE_PE2 34; //
#define MCU_PEDI_PORTE_PE1 33; //
#define MCU_PEDI_PORTE_PE0 32; //

#endif
