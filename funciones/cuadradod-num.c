#include<stdio.h>
#include<stdlib.h>
float cua(float,float);
int main(int narg, char*args[])
{
    float num,res,r,x;
	printf("programa para calcular el cuadrado de un numero\n");
	printf("Ingrese un numero:_");
	scanf("%f",&num);
	res=cua(num,r);
	printf("el cuadado de %f es:_%f",num,res);
	return 0;
}

float cua(float num, float r)
{
	r=num*num;
	return r;
}
