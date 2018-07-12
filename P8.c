#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCESS 0

void gera_num(float * vetor, int tamanho_vetor) 
{
	int indice = 0; 
	for(indice = 0; indice < tamanho_vetor; indice++)	vetor[indice] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float somatorio(float vetor[], int n)
{
	 if (n != 0)
   {  
      float soma;
      soma = somatorio(vetor, n - 1);
      if (vetor[n - 1] > 0) soma += vetor[n-1];
      return (soma);    
   }
   else return EXIT_SUCESS;
}

float produtorio(float vetor[], int j)
{
	float multiplica = 1.0f;
	for(int indice = 0; indice < j; indice++) multiplica = multiplica * vetor[indice];
  
	return multiplica;
}

int main()
{
	srand(123456);
  float numeros[100];
	int opcao, tamanho = 100, status = 1;

  gera_num(numeros, tamanho);
  
	do
  {
  	printf("\nDigite: \n1 - Somatorio.\n2 - Produto.\n3 - Sair do prgrama.");
	  printf("\nDigite a opcao: ");
	  scanf("%d", &opcao);	
	  getchar();
	  switch(opcao)
    {
		  case 1:
			  printf("\nSomatorio: %f", somatorio(numeros, tamanho));
			  break;
		  case 2:
		  	printf("\nProdutorio: %f", produtorio(numeros, tamanho));
		  	break;
		  case 3:
        status = 0;
			  return EXIT_SUCESS;
		  default:
			  break;
    }
	}while(status);
  
	return EXIT_SUCESS;
}
