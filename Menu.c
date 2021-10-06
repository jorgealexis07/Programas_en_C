#include<stdio.h>

int main(int narg, char*args[])
{
	int opc;
	char a;
	
	while(opc !=5)
    {

	  printf("\nELIJA LA OPCION QUE DESEE\n");
	  printf("1.-Sumar\n");
	  printf("2.-Restar\n");
	  printf("3.-Multiplicar\n");
	  printf("4.-Dividir\n");
	  printf("5.-Salir\n");
	  scanf("%d",&opc);
	  
	  if(opc>=6)
	  {
	  	printf("ERROR la opcion no existe");
      }
	  
    
	  if(opc == 1)
	  {
	  	int a,b;
	  	printf("SUMAR\n");
	  	printf("Ingresa valor 1:");
	  	scanf("%d",&a);
	  	printf("Ingresa valor 2:");
	  	scanf("%d",&b);
	  	printf("El resultado es: %d\n",(a+b));
      }
	  
	  else if(opc == 2)
	  {
	  int a,b;
	  	printf("RESTAR\n");
	  	printf("Ingresa valor 1:");
	  	scanf("%d",&a);
	  	printf("Ingresa valor 2:");
	  	scanf("%d",&b);
	  	printf("El resultado es: %d\n",(a-b));
      }
	  
	  else if(opc == 3)
	  {
	  	int a,b;
	  	printf("MULTIPLICACION\n");
	  	printf("Ingresa valor 1:");
	  	scanf("%d",&a);
	  	printf("Ingresa valor 2:");
	  	scanf("%d",&b);
	  	printf("El resultado es: %d\n",(a*b));
      }
	  
	  else if(opc == 4)
	  {
	  	int a,b;
	  	printf("DIVISION\n");
	  	printf("Ingresa valor 1:");
	  	scanf("%d",&a);
	  	printf("Ingresa valor 2:");
	  	scanf("%d",&b);
	  	printf("El resultado es: %d\n",(a/b));
     }
	return 0;	
}
}
