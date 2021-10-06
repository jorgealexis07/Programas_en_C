#include<stdio.h>

int main (int narg, char *args[])
{
  int a;
  printf("Ingrese un numero:");
  scanf("%d",&a);
  if(a>0)
  {
  	 printf("el numero es positivo\n");
  } 
  else
  {
  	printf("el numero es negativo\n");
  }
  return 0;
}
