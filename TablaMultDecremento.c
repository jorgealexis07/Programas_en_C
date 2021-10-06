#include<stdio.h>

int main(int narg, char*args[])
{
	int a,i,R;
	printf("Ingrese tabla de multiplicar: ");
	scanf("%d",&a);
	for(i=10;i>=1;i--)
	{
		R=i*a;
		printf("%dX%d=%d\n",i,a,R);
	}
return 0;
}
