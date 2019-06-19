#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    //denifi variavel
    int a = 1;
    char b = 'x';
    while(true){
    printf("Digite um valor de 1 a 3\n");
    scanf("%d", &a);
    printf("Digite um valor de a a z\n");
    scanf(" %c", &b);

    //codigo de exemplo com if
    if(a == 1){
        printf("Opcao escolhida: 1\n");
    }else if(a == 2){
        printf("Opcao escolhida: 2\n");
    }else if (a == 3){
        printf("Opcao escolhida: 3\n");
    }else{
        printf("Opcao invalida\n");
    }

    switch(a){
    case 1:
        printf("Opcao escolhida: 1\n");
        break;
    case 2:
        printf("Opcao escolhida: 2\n");
        break;
    case 3:
        printf("Opcao escolhida: 3\n");
        break;
    default:
        printf("Opcao invalida\n");
    }

    switch(b){
    case 'x':
        printf("A letra eh x\n");
        break;
    default:
        printf("Opcao invalida\n");
    }
    }

    system("pause");
    return 0;
}
