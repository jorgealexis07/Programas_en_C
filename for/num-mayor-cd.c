#include<stdio.h>


main()
{
	int tc,in,vm,i;
	tc=in=vm=i;
	vm= 0;
	printf("ingresa el tamaño de la coleccion de datos:");
	scanf("%d",&tc);
	for(i=1;i<=tc;i=i+1)
	{
		printf("Insertar numero:");
		scanf("%d",&in);
    }
		if(in>vm)
		{
			
				vm=in;
				
			}
	printf("El numero mayor es: %d",vm);
    
 
return 0;
}

