#include <stdio.h>
#include <stdlib.h>

int main(){

    //definindo variaveis
    int a = 20;

    //Conectivo logico E(AND) &&, Se uma comparação for falsa nao entra no bloco
    if(a > 5 && a > 15){
        printf("A variavel esta entre 5 e 15\n");
    }

    //Conectivo logico OU(OR), se uma comparação for verdadeira, entra no bloco
    if (a > 5 || a >15){
        printf("A variavel a eh maior que 5 ou 15\n");
    }

    //misturando conectivos
    if( (a > 5 && a > 15) || a == 20){
        printf("A variavel a esta entre 5 e 15 ou ela vale 20\n");
    }

    system("pause");
    return 0;
}
