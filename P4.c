#include <stdio.h>

int pow(int exp)
{
	int pot = 10;
	if(exp >= 2) 
	{
		for(exp; exp > 1; exp--)
		{
			pot *= 10;
		}
	}
	else if(exp == 0) pot = 1;

	return pot;
}

int main()
{
	int i = 0, j = 0, k = 0, num = 0, numint = 0, exp = 0, contemnum[256];
    char numero[256];


	printf("\nDigite uma sequencia de caracteres com numeros: ");
	scanf("%s", &numero);
	getchar();

	printf("\nNumero inteiro: ");

	for(k = 0; numero[k] != '\0'; k++)
	{
		if(numero[k] - 48 >= 0 && numero[k] - 48 < 10)
		{
			contemnum[j] = numero[k];
			j++;
		}
	}

	while(i < j)
	{
		exp = j - i;
		num = contemnum[i] - 48;
		numint += num * pow(exp-1);
		i++;
	}

	printf("%i", numint);

	return 0;
}
