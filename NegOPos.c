#include <stdio.h>

int main(int narg, char *args[])
{
  int a;

  printf("Ingresa un numero: ");
  scanf("%d",&a);

  if(a>0)
  {
    printf("es positivo\n");
  }
  else
  {
    printf("es negativo\n");
  }
  return 0;
}
