#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main(){

    //
    int vetor[TAM],cont;

    //passando valores para vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;



    //exibir valores do vetores
    printf("Posicao 0: %d\n", vetor[0] );
    printf("Posicao 1: %d\n", vetor[1] );
    printf("Posicao 2: %d\n", vetor[2] );

    //Adicionando 1 para cada posição
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;
    }

    printf("LOG %d\n", vetor[cont]);

    //Lendo valores novos
     for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }
    //vetor em laço de repetição
    for(cont = 0; cont < TAM; cont++){
        printf("Posicao %d : %d\n", cont, vetor[cont]);
    }

    system("pause");
}
