#include <xc.h>
#include"config.h"
#include "display7s.h"

#define _XTAL_FREQ 4000000

void main() 
{
    unsigned char tmp;
    TRISB=0x00;
    TRISA=0x0E;

    //test display 7s
    for (tmp=0;tmp<10;tmp++)
    {
      PORTB=display7s(tmp);	
      PORTAbits.RA4=1;
      __delay_ms(2000);	
      PORTAbits.RA4=0;
      __delay_ms(2000);	
    }
}
