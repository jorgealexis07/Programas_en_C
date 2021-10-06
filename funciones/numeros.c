#include<stdio.h>
int num(int);
int main(int narg,char*args[])
{
	int numero,r;
	do{
	    printf("\nIngrese un numero del 1 al 10:__");
	    scanf("%d",&numero);
	    r= num(numero);
	    if(numero>11)
	    {
	    	printf("ERROR");
		}
	}
	while(numero != 11);

	return 0;
}
int num(int numero)
{
    if(numero==1){
    	printf("UNO");
	}
	else if(numero==2){
		printf("DOS");
	}
	else if(numero==3){
		printf("TRES");
	}
	else if(numero==4){
		printf("CUATRO");
	}
	else if(numero==5){
		printf("CINCO");
	}
	else if(numero==6){
		printf("SEIS");
	}
	else if(numero==7){
		printf("SIETE");
	}
	else if(numero==8){
		printf("OCHO");
	}
	else if(numero==9){
		printf("NUEVE");
	}
	else if(numero==10){
		printf("DIEZ");
	}
return numero;
}
