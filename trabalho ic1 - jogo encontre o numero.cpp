#include<stdio.h>
#include <locale.h>

int main ()
{
	
setlocale(LC_ALL, "Portuguese");

	int a,k;
	
	printf("\nDigite seu palpite:\n");
	scanf("%d", &k);
	
	a=10;

	do
	{	
		if(k>a)
		{
			printf("O n�mero procurado � menor que o palpite.");
			printf("\nDigite outro n�mero:\n");
			scanf("%d",&k);
		}
	
		else if(k<a)
		{
			printf("O n�mero procurado � maior que o palpite");
			printf("\nDigite outro n�mero: \n");
			scanf("%d",&k);
		}
	}while(a!=k);
		
		if(k==a)
		{
			printf("N�mero encontrado!!");
		}
}
