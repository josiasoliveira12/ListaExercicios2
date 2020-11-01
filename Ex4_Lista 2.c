#include<stdio.h>
#include"bibliotecaVetor.h"
int main()
{	
	int numeros[100], n, i, pares=0, soma, media, op;
	printf("Quantos elementos no vetor:");
	scanf("%d", &n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
	if(op == 1)
		geraVetor(numeros, n);
	else
		leiaVetor(numeros, n);
	for(i=0;i<n;i++){
		if(numeros[i] % 2 == 0){
			pares++;
			soma += numeros[i];
		}
		
	}
	printf("\n");
	media = soma / pares;
	mostraVetor(numeros, n);
	printf("Media dos valores par:%d", media);
}
