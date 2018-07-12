#include <stdio.h>

int main()
{	
	char *ponteiro;
	char string_inserida[256];
	
	int *ponteiros;
	int i = 0, contador = 0, option = 0, text[256];
	
	do
	{
		do
		{
			printf("\n##################################### MENU ####################################\n");
			printf("\n1. Codificar");
			printf("\n2. Decodificar");
			printf("\n0. Sair\n");
			printf("\nDigite a opcao: ");
			scanf("%d", &option);
			getchar();
		}while(option != 0 && option != 1 && option != 2);
		
		switch(option)
		{	
			case 0:
				return 0;
			case 1:
				for(i; i < 256; i++) string_inserida[i] = '\0';
				printf("\nDigite uma sequencia de caracteres: ");
				fgets(string_inserida, 256, stdin);
				
				for(contador=0; string_inserida[contador] != '\0'; contador++);
			
				ponteiros = (int*)string_inserida;
				printf("\nFrase codificada: \n");
			
				for(i = 0; i < contador; i++) if(*(ponteiros + i) != 0 ) printf("%i ", *(ponteiros + i)); 
				printf("\n\n");
				break;
			
			default :
				printf("\nApos a digitacao da sequencia numerica, digite 0 e aperte enter\n");
				ponteiro = (char*)text;
				i = 0; contador = 0;
				printf("Digite uma sequencia de numeros: \n");
				
				do
				{
					scanf("%d", &contador);
	 				getchar();
					text[i] = contador;
					i++;
				}while(contador != 0);
				
				ponteiro = (char*)&text;
				printf("\nCaracteres decodificados: \n");
				
				for(i = 0; i < sizeof(text) && *(ponteiro+i) != 0; i++) printf("%c", *(ponteiro+i));
				printf("\n\n");
				break;
		}
	}while(option != 0);
	
	return 0;
}
