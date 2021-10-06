#include<stdio.h>
#include<math.h>
int main (int narg, char *args[])
{
  int a,v;
  printf("Ingrese un numero negativo:");
  scanf("%d",&a);
  v=fabs(a);
  printf("el valor absoluto= %d",v);
  
  return 0;
}
