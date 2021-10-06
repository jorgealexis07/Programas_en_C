#include<stdio.h>
using namespace std;
int main()
{
	int numero;
	do
	{
		printf( "Ingrese un numero ");
		scanf("%d",&numero);
	}
	while(numero <= 100);
	
	return 0;
}
