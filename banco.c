#include<stdio.h>

int main(int narg, char *args[])
{
  int i;	
  float mi=500,mesi=5,interes,porciento=0,nmes,a,x,m;
  porciento=0.02;
  interes=mi*porciento;
  for(i=1;i<=mesi;i++)
  {
  	 if(interes<500)
    {
    	
       a=interes+mi;
       porciento=porciento+interes;
       printf("Ganancia mes:%f\n",porciento);
    }
  x=a*porciento;
  }
   m=porciento+mi; 
    printf("Total:$%f\n",m);

return 0;
}
