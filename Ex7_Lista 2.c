#include <stdio.h>
#include "bibliotecaVetor.h"
int main()
{
	int numerosA[100], numerosB[100], numerosC[100], n, op, i;
	printf("Quantos elementos no vetor:");
	scanf("%d", &n);
    printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
    if(op == 1){
		geraVetor(numerosA, n);
		geraVetor(numerosB, n);
    }
	else{
        leiaVetor(numerosA, n);
		leiaVetor(numerosB, n);
	}
	//mostraVetor(numerosA, n);
	//mostraVetor(numerosB, n);

	for(i=0;i<n;i++){
        numerosC[i] = numerosA[i] * numerosB[i];
	}
	printf("\nMultiplicacao do vetor A pele B:\n");
    mostraVetor(numerosC, n);

}
