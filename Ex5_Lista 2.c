#include <stdio.h>
#include "bibliotecaVetor.h"
int main()
{
	char dna[50], complementar[50];
	int n, i;
	printf("Quantidade de bases da sequencia de DNA:");
	scanf("%d",&n);
	//leiaVetorChar(dna, n);
	fflush(stdin);
	gets(dna);
	mostraVetorChar(dna, n);
	for(i=0;i<n;i++){
		switch(dna[i]){
			case 'T': complementar[i] = 'A';
				break;
			case 'A': complementar[i] = 'T';
				break;
			case 'C': complementar[i] = 'C';
				break;
			case 'G': complementar[i] = 'C';
				break;
		}
	}
	//printf("Fita complementar do DNA:");
	mostraVetorChar(complementar, n);

	return 0;

}
