#include<stdio.h>
#include"bibliotecaVetor.h"

int main()
{
    int vetorA[100], vetorB[100],n, op, i, x;
    printf("Quantos elementos no vetor:");
    scanf("%d", &n);
    printf("[1] Gerar\n[2] Ler\n");
    scanf("%d", &op);
    if(op == 1)
        geraVetor(vetorA, n);
    else
        leiaVetor(vetorA, n);
    printf("\nVetor A: ");
    mostraVetor(vetorA, n);
    printf("\nDigite um numero para multiplicar o vetorA:");
    scanf("%d", &x);

    for(i=0;i<n;i++){
        vetorB[i] = vetorA[i] * x;
    }
    printf("\nVetor B: ");
    mostraVetor(vetorB, n);

}
