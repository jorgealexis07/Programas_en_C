#include<stdio.h>
int main(int narg, char*args[])
{
	int tm,i;
	float r,x,elem;
	elem=0;
	printf("Ingresa el tamaño:");
	scanf("%d",&tm);
	
	for(i=1;i<=tm;i++)
	{
		printf("inserta el numero:");
		scanf("%f",&x);
		elem=elem+x;
	}
	
		r=elem/tm;
	printf("El promedio es=%f",r);
	
	
	
	return 0;
}
