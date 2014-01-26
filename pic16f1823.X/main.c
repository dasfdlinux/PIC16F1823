/*
 * File:   main.c
 * Author: Daniel
 *
 * Created on January 23, 2014, 6:25 PM
 */


#include <xc.h>
#include "config_bits.h"
#include "pin_definitions.h"

void main(void) {
    OSCCONbits.IRCF = 0b1101;   //set clock to 4 MHz
    SSP1CON1bits.SSPEN = 0;     //disable MSSP module
    CPSCON0bits.CPSON = 0;      //turn off CSP module (capacitive sensing)
    ANSELAbits.ANSELA = 0;
    ANSELCbits.ANSC = 0;
    TRISAbits.TRISA2 = 0;       //output pin
    TRISCbits.TRISC0 = 0;       //output pin
    TRISCbits.TRISC1 = 0;       //output pin
    TRISCbits.TRISC2 = 0;       //output pin
    
    while(1)
    {
        LED0 = 0;
        LED1 = 1;
        LED2 = 0;
        LED3 = 1;
        _delay(400000);

        LED0 = 1;
        LED1 = 0;
        LED2 = 1;
        LED3 = 0;
        _delay(400000);
    }
    return;
}
