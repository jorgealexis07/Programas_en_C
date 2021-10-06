#include<stdio.h>
int Suma(int,int);//prototipo de funcion
int main()
{
  int x,y,c;
  printf("PROGRAMA PARA SUMAR 2 NUMEROS\n");
  printf("Ingrese el primer numero:_");
  scanf("%d",&x);
  printf("Ingrese el segundo numero:_");
  scanf("%d",&y);
  c=Suma(x,y);
  printf("La suma es: %d",c);
  return 0;
}

  int Suma(int x, int y)
  {
     int c;
     c=x+y;
     return c;
  }