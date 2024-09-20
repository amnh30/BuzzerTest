#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <avr/delay.h>
#define C_CPU 8000000UL

/* MCAL Layer Include */
#include "MDIO/MDIO_Interface.h"


int main(void)
{
    // Initialize the LCD
    MDIO_IntialPins();
while(1){
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_HIGH);
_delay_ms(200);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_LOW);
_delay_ms(200);

}

}
