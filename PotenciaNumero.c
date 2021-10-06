#include<stdio.h>
#include<math.h>

int main (int narg, char *args[])
{
	int base, potencia, resultado,x;
	x=1;
	resultado=1;
	printf("Ingresa la base:");
	scanf("%d",&base);
	printf("Ingresa la potencia:");
	scanf("%d",&potencia);
	
	while(x<=potencia)
	{
		resultado=resultado*base;
		x++;
    }
	printf("%d^%d=%d ",base,potencia,resultado);
	return 0;
}
