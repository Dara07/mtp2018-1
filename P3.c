#include <stdio.h>

void conversor(int num)
{
	int i = 0, j = 0, num_convertido[100], negative = 0;
	
	if(num < 1)
	{
		num *= -1;
		num -= 1;
		negative = 1;
	}
	
	for(i = 0; num >= 1; i++)
	{ 
		num_convertido[i] = num % 2;
		num /= 2;
	}
	
	j = i;
	
	if(negative)
	{
		for(j -= 1; j >= 0; j--)
		{
			if(num_convertido[j] == 0) num_convertido[j] = 1;
			else num_convertido[j] = 0;
		}
	}
	
	for(i -= 1; i >= 0; i--) printf("%i", num_convertido[i]);
}

int main()
{
    int opcao = 0, i = 0, num = 0, num1 = 0, num2 = 0;
    
    printf("\n--------------------------------------------------------");
	printf("\n|                     MENU PRINCIPAL                   |");
	printf("\n|                                                      |");
	printf("\n|               1. NOT                                 |");
	printf("\n|               2. AND                                 |");
	printf("\n|               3. OR                                  |");
	printf("\n|               4. XOR                                 |");
	printf("\n|               5. RIGHT SHIFT                         |");
	printf("\n|               6. LEFT SHIFT                          |");
	printf("\n--------------------------------------------------------");
	printf("\nDigite a opcao desejada: ");
	scanf("%i", &opcao);
	getchar();
	
	switch(opcao)
	{
		case 1:
			printf("\nDigite um numero: ");
			scanf("%i", &num1);
			printf("NOT ");
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			num = ~num1;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 2:
			printf("\nDigite o primeiro numero: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" AND ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 & num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 3:
			printf("\nDigite o primeiro numero: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" OR ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 | num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 4:
			printf("\nDigite o primeiro numero: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" XOR ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 ^ num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 5:
			printf("\nDigite o primeiro numero: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" >> ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 >> num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 6:
			printf("\nDigite o primeiro numero: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" << ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 << num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		default:
			break;
	}
    
    return 0; 
}
