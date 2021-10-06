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
	else 
	{
		printf("no se encuentra el numero dentro del intervalo\n");
	}
	return 0;
}
