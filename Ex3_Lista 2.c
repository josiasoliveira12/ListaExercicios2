#include<stdio.h>
#include"bibliotecaVetor.h"
int main()
{
	int numeros[100], n, i, impares=0, op;
	printf("Quantos elementos no vetor:");
	scanf("%d", &n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
	if(op == 1)
		geraVetor(numeros, n);
	else
		leiaVetor(numeros, n);
	for(i=0;i<n;i++){
		if(numeros[i] % 2 != 0)
			impares++;
	}
	printf("\nVetor: ");
	mostraVetor(numeros, n);
	printf("Quantidade de valores impares:%d", impares);
	
	
}
