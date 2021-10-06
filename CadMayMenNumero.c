#include<stdio.h>
int main(int narg, char*args[])
{
	int tm,i,x,vm,menor;
	
	printf("Ingresa el tamaño: ");
	scanf("%d",&tm);
	
	for(i=1;i<=tm;i++)
	{
		printf("\n Inserta el numero: ");
		scanf("%d",&x);
		if(x>vm)
		{
			vm=x;
		}
		else if(menor<x)
		{
			menor=x;
		}
	}
		printf("El numero mayor es: %d",vm);
		printf("\n El numero menor es: %d",menor);
	return 0;
}
