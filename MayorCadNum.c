#include<stdio.h>
#include<stdlib.h>
int main(int narg, char*args[])
{
  int i,cantidad;
  float *arreglo,mayor;
  printf("Ingresa la cantidad de numeros");
  scanf("%d",&cantidad);
  arreglo=(float *) malloc(sizeof(float)*cantidad);
  for(i=0;i<cantidad;i++)
  {
     printf("ingresa el numero %d:_",i+1);
     scanf("%f",&arreglo[i]);
  }
  
 mayor=arreglo[0]; 
 for(i=0;i<cantidad;i++)
  {
     if (mayor < arreglo[i])
   {
     mayor = arreglo[i];
   }
  }
  printf("El numero mayor es: %f",mayor);
return 0;
}
