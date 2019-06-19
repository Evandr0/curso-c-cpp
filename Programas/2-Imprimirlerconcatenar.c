#include <stdio.h>
#include <stdlib.h>

void main(){


    int a = 5, b; //define as variáveis do sistema

    printf("%d \n", a); //mostra na tela o valor da variavel a

    printf("O valor da var a e: %d \n", a);//Concatenando

    a = 15; //mudando o valor da variavel a

    printf("O valor de A agora e: %d \n", a); //mostra na tela o valor da variavel a

    printf("Digite um numero: \n"); // mostra na tela "Digite um numero"
    scanf("%d", &b); //ler valor digitado e armzena em b
    printf("O valor de b e: %d \n", b); //mostra na tela o valor da variavel b

    system("pause");
}
