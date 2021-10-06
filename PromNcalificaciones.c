#include<stdio.h>
#include<stdlib.h>
int main(int narg, char * args[])
{
  int tam,i;
  float *arreglo, suma=0,prom;

  printf("promedio de n calificaciones en arreglo estatico en tiempo de ejecucion\n");
  printf("Cuantas calificaciones deseas ingresar: ");
  scanf("%d",&tam);
  arreglo=(float *) malloc(sizeof(float)*tam);
  for(i=0;i<tam;i++)
  {
     printf("Ingresa tu calificacion %d:",i+1);
     scanf("%f",&arreglo[i]);  
  }
  for(i=0;i<tam;i++)
  {
    suma=suma+arreglo[i];
  }
  suma=suma/tam;
  printf("El promedio es:%.4f",suma);
return 0;
}
