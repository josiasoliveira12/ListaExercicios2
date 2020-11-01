#include<stdio.h>
#include"bibliotecaVetor.h"
int main()
{
	int numeros[100], n, i, op, numeroDigitado, aux, posicao=125;
	printf("Quantos elementos no vetor:");
	scanf("%d", &n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
	if(op == 1)
		geraVetor(numeros, n);
	else
		leiaVetor(numeros, n);

	printf("Digite um numero para ver se esta no vetor: ");
	scanf("%d", &numeroDigitado);
    for(i=0;i<n;i++){
        if(numeros[i]== numeroDigitado){
           posicao = i;
           printf("\nO numero esta no vetor na posicao %d:", posicao);
        }
    }
    if(posicao == 125)
        printf("\nO numero nao esta no vetor");
    printf("\n\n");
}
