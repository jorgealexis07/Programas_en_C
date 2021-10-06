#include<stdio.h>
int main(int narg,char *args[])
{
	int n;
	printf("inserte un numero para ver si esta dentro del intervalo:");
	scanf("%d",&n);
	
	if(n>=5 && n<=10)
	{
		printf("El numero esta dentro del intervalo\n");
	}
	
	else if(n>=15 && n<=20)
	{
		printf("El numero esta dentro del intervalo\n");
	}
	else 
	{
		printf("El numero no esta en ningun intervalo\n");
	}
	return 0;
}
