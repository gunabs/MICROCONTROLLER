#include <REGX52.H>  

sbit LED = P1^0;

void delay( unsigned int ms)
{
     unsigned int i, j;
    for(i = 0; i < ms; i++)
        for(j = 0; j < 123; j++); 
}

void main()
{
    while(1)
    {
        LED = 1;      
        delay(500); 

        LED = 0;      
        delay(500); 
    }
}
