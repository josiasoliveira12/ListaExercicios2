#include <stdio.h>
#include "bibliotecaVetor.h"
int main()
{
	int numeros[100], n, i, maior, menor, op;
	printf("Quantos elementos no vetor:");
	scanf("%d", &n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
	if(op == 1)
		geraVetor(numeros, n);
	else
		leiaVetor(numeros, n); 
	mostraVetor(numeros, n);
	
	menor = numeros[1];
	maior = numeros[1];

	for(i=1;i<n;i++){
		if(numeros[i] < menor)
			menor = numeros[i];
		if(numeros[i] > maior)
			maior = numeros[i];
	}
	printf("\nMenor Valor:%d\nMaior Valor:%d\n", menor, maior);
	return 0;
}
