#include<stdio.h>
#include<conio.h>
int main (int narg, char *args[])
{
  int i;
  char a[20];
  printf("Ingrese tu nombre:");
  scanf("%ls",a);
  for(i=1;i<=5;i=i+1)
  {
  	printf("%ls\n",a);
  }
  
  return 0;
}
