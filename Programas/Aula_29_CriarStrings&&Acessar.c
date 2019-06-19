#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main(){

    //variaveis
    char palavra[10];

    //instrução
    printf("Digite uma palavra\n\n");

    //Limpa o buffer
    setbuf(stdin, 0);

    //Ler a string
    fgets(palavra, 255, stdin);

    //limpa as casas não utilizadas

    palavra[strlen(palavra)-1] = '\0';

    //imprime
    printf("A palavra eh %s", palavra);

   system("pause");
}
