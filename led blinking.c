#include<reg51.h>
void delay(unsigned int x){
	int i;
	for(i=0;i<x;i++);
}
void main()
{		
	while(1){
		P1=	~P1;
		delay(1000);
				
  }
}	