#include<stdio.h>

int main(int narg, char *args[])
{
  int a,b,i,r,x;
  printf("inserte el valor inicial:_ \n");
  scanf("%d",&a);
  printf("inserte el valor final:_ \n");
  scanf("%d",&b);

  for(i=a;i<=b;i=i+1)
  {
    if((i%2)==0)
     {
        for(r=1;r<=10;r++)
          {
           x=r*i;
            printf("%dX%d=%d\n",i,r,x);
          }
      }
  } 
return 0;
}
