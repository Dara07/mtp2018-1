#include <stdio.h>

int funcaoDeAckermann(int m, int n)
{	
	if(m == 0) return n + 1;	
	else if(m > 0 && n == 0) funcaoDeAckermann(m - 1, 1);
	else if(m > 0 && n > 0) funcaoDeAckermann(m - 1, funcaoDeAckermann(m, n - 1));
}

int main()
{	
	int m, n;
	
	printf("\nInsira os valores de m e n (m n): ");
	scanf("%d %d", &m, &n);

	printf("\nResultado = %d ", funcaoDeAckermann(m, n));
	return 0;
}
