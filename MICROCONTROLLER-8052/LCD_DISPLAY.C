#include <reg52.h>

sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
void delay(int ms )
{
	unsigned int i,j;
	
	for(i=0;i<ms;i++)
	 for(j=0;j<1275;j++);
}
void pulse()
{
	en=1;
	delay(2);
	en=0;
	delay(2);
}
void cmd(char ch)
{
	rs=0;
	rw=0;
	P1=ch;
	pulse();
	delay(2);
	
}

void init()
{
	delay(20);
	cmd(0x38);
	cmd(0x0c);
	cmd(0x06);
	cmd(0x01);
	
}
void dat(char cha)
{
	rs=1;
	rw=0;
	P1=cha;
	pulse();
	delay(2);
	
}

void main()
{
	init();
	dat('h');
	dat('h');
	dat('h');
}
	
