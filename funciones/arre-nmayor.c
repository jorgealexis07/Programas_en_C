#include<stdio.h>
#include<stdlib.h>
int numM(int *,int);
int main(int narg, char*args[])
{
   int *arre;
   int tam,i,r;
   printf("*************************************************************\n");
   printf("..:::PROGRAMA PARA MOSTRAR EL NUMERO MAYOR DE UN ARREGLO:::..\n");
   printf("*************************************************************\n");
   printf("Ingresar el numero de numeros que desea ingresar");
   scanf("%d",&tam);
   arre=(int*) malloc(sizeof(int)*tam);
   for(i=0;i<tam;i++)
   {
      printf("ingresa un digito:_");
      scanf("%d",&arre[i]);
   }
  r=numM(arre,tam);
  printf("El numero mayor es: %d",r);
  return 0;
}

   int numM(int *arre,int tam)
   {
      int nm,i;
      nm=arre[0];
      for(i=1;i<tam;i++)
      {
        if(nm<arre[i])
        {
           nm=arre[i];
        }
      }
      return nm;
   }

