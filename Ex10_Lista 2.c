#include <stdio.h>
#include "bibliotecaVetor.h"
int main()
{
	int numeros[100], n, i, op, num, cont=0;
	printf("Quantos elementos no vetor:");
	scanf("%d", &n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
	if(op == 1)
		geraVetor(numeros, n);
	else
		leiaVetor(numeros, n);

	printf("Qual valor voce quer verificar:");
	scanf("%d", &num);

	for(i=0;i<n;i++){
        if(num == numeros[i])
            cont++;
	}
	printf("\nO valor %d se encontra %d vez(es) no vetor. \n", num, cont);
	mostraVetor(numeros, n);
}
