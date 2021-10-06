#include<stdio.h>

int main(int narg, char *args[])
{
   int a,b,res,i;
   res=1;
   while(res<5)	
	{
		for(i=1;i<2;i++)
			printf("ingrese el numero %d:_",i);
			scanf("%d",&a);
		    printf("ingrese el numero %d:_",i);
			scanf("%d",&b);
			if(a!=b)
			{
				printf("Los numeros son diferentes\n");
		    }
				else if(a==b)
				{
					printf("los numeros son iguales\n");
				}
		res++;	
	}
	
  
  return 0;	
}
