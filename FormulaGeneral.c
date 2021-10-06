#include<stdio.h>
#include<math.h>
int main (int narg, char *args[])
{
int a,b,c;
float x1,x2;

  printf("Ingresa el valor de A\n");
  scanf("%d",&a);
  printf("Ingresa el valor de B\n");
  scanf("%d",&b);
  printf("Ingresa el valor de C\n");
  scanf("%d",&c);

  x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
  printf("el resultado de x1 es:\n %f",x1);
  x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
  printf("\nel resultado de x2 es:\n %f", x2);
  return 0;
