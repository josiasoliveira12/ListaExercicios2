#include<stdio.h>
#include"bibliotecaVetor.h"
int main()
{
	int vetorA[100], vetorB[100], vetorC[100], n, m, i, op, op2;
	printf("Quantos elementos no vetorA:");
	scanf("%d", &n);
	printf("\nQuantos elementos no vetorB:");
	scanf("%d", &m);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
	if(op == 1){
        geraVetor(vetorA, n);
        geraVetor(vetorB, m);
	}
	else{
		leiaVetor(vetorA, n);
		leiaVetor(vetorB, m);

    }
    printf("\nElementos comuns entre os vetores: \n");
    for(i=0;i<n;i++){
       for(i=0;i<n;i++){
            if(vetorA[i] == vetorB[i])
                printf("%d ", vetorA[i]);
       }
   }
}

