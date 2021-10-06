#include <stdio.h>

int main (int narg, char *args[])
{
  int a;
  int b;
  int c;

  printf("Introduce el valor de a: ");
  scanf("%d",&a);
  printf("Introduce el valor de b: ");
  scanf("%d",&b);
  printf("introduce el valor de c: ");
  scanf("%d",&c);

  if(a>b && a>c) 
  {
    printf("a es mayor\n");
  }
  else if(b>a && b>c)
  {
    printf("b es mayor\n");
  }
  else if(c>a && c>b)
  {
    printf("c es mayor\n");
  }
  else if(a==b && a==c)
  {
    printf("son iguales");
  }

return 0;  
}
