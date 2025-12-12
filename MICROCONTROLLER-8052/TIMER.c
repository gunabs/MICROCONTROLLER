#include <reg52.h>

sbit led = P1^0;

void delay_1s()
{
    unsigned int i;

    for (i = 0; i < 1000; i++)   
    {
        TL0 = 0xef;  
        TH0 = 0xd8;
        TF0 = 0;     
        TR0 = 1;      
        while (TF0 == 0); 
        TR0 = 0;     
    }
}

void main()
{
    TMOD = 0x01;      

    while (1)
    {
        led = 0;       
        delay_1s();    

        led = 1;       
        delay_1s();    
    }
}
