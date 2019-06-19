#include <stdio.h>
#include <stdlib.h>

void main(){
    //definindo variaveis
    int opcao = 5;

    while(opcao < 1 || opcao > 3){
        printf("Escolha uma opcao:\n1-Opcao 1\n2-Opcao 2\n3-Opcao 3\n");

        scanf("%d",&opcao);

        switch(opcao){
            case 1:
            printf("A opcao 1 foi escolhida\n");
            break;
            case 2:
            printf("A opcao 2 foi escolhida\n");
            break;
            case 3:
            printf("A opcao 3 foi escolhida\n");
            break;
            default:
            printf("Opcao invalida\n");
            break;
            }
    }
    system("pause");
}
