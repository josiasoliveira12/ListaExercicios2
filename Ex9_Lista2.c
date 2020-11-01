#include <stdio.h>
#include <string.h>

int main()
{
    char letras[100], qtdElementos, i;
    printf("Digite uma frase:");
    gets(letras);
    qtdElementos = strlen(letras);

    printf("\nFrase inversa: ");
    for(i=qtdElementos;i>=0;i--){
       printf("%c",letras[i]);
    }
}
