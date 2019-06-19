#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //Definindo variaveis
    int a = 4, opcao = 2;
    float b = 2.5;
    char c = 'x';

    //Condicional simples.
    if (a == 5){
        printf("A variavel a = 5\n");
    }
    if (b == 2.5){
        printf("A variavel b = 2.5\n");
    }
    if (c == 'x'){
        printf("A variavel c = letra x\n");
    }


    //NUmero par ou impacta
    if (a % 2 == 1){
        printf("A variavel a eh impar\n");
    }else{
        printf("A variavel eh par\n");
    }

    opcao = 3;

    //Condicional composta
    if(opcao == 1){
        printf("A opcao = 1\n");
    }else if(opcao == 2){
        printf("A opcao = 2\n");
    }else{
        printf("A opcao eh %d \n", opcao);
    }


    //Quando usar condicao para a mesma variavel, usar condicional composta.
    system("pause");
}
