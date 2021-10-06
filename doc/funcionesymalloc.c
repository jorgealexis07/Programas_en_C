#include<stdio.h>
#include<stdlib.h>
int numMENOR(int *arre,int tam);
int main(int narg, char *args[])
{
	int tam,*arre,i,r;
	printf("ingrese el tamaño de datos a ingresar:_");
	scanf("%d",&tam);
	arre=(int*) malloc(sizeof(int)*tam);
	for(i=0;i<tam;i++)
	{
		printf("inserte un valor:_");
		scanf("%d",&arre[i]);
	}
	r=numMENOR(arre,tam);
	printf("El resultado es: %d",r);
	return 0;
	
}

int numMENOR(int *arre,int tam)
{
	int nmenor,i;
	nmenor=arre[0];
	for(i=0;i<tam;i++)
	{
     	if(nmenor>arre[i])
     	{
     		nmenor=arre[i];
		}
	}
    return nmenor;
}
