#include<stdio.h>

int main (int narg, char *args[])
{
  int a,i;
  
  printf("Ingrese la tabla:");
  scanf("%d",&a);
  for(i=1;i<=10;i=i+1)
  {
  	printf("%dX%d=%d\n",a,i,(a*i));
  }
  
  return 0;
}
