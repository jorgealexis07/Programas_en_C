#include<stdio.h>
void menu();
void suma();
void resta();
void mult();
void div();
int main(int narg, char*args[])
{
	menu();
	return 0;
}
void menu()
{
	int opc;
	do{
	printf("\nSeleccione la opcion que desee realizar\n");
	printf("1.-.::SUMA:::.\n");
	printf("2.-.::RESTA:::.\n");
	printf("3.-.::MULTIPLICACION:::.\n");
	printf("4.-.::DIVICION:::.\n");
	printf("5.-.::SALIR:::.\n");
	printf("Opcion:");
	scanf("%d",&opc);
	switch(opc)
	{
	case 1:
	    suma();
	    break;
	case 2:
	    resta();
	    break;
	case 3:
	    mult();
	    break;
	case 4:
	    div();
	    break;
	case 5:
	
	    break;    
	default:
	    printf("ERROR");
	    break;    
    }
    } 
	while(opc !=5);
}

void suma()
{
	float a,b,R;
  printf("ingresa el primer valor:");
  scanf("%f",&a);
  printf("ingresa el segundo valor:");
  scanf("%f",&b);
  R=a+b;
  printf("La suma= %f",R);
}

void resta()
{
	float a,b,R;
  printf("ingresa el primer valor:");
  scanf("%f",&a);
  printf("ingresa el segundo valor:");
  scanf("%f",&b);
  R=a-b;
  printf("La resta= %f",R);
}

void mult()
{
	float a,b,R;
  printf("ingresa el primer valor:");
  scanf("%f",&a);
  printf("ingresa el segundo valor:");
  scanf("%f",&b);
  R=a*b;
  printf("La multiplicacion= %f",R);
}

void div()
{
	float a,b,R;
  printf("ingresa el primer valor:");
  scanf("%f",&a);
  printf("ingresa el segundo valor:");
  scanf("%f",&b);
  R=a/b;
  printf("La divicion= %f",R);
}
