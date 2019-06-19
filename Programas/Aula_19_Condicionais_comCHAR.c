#include <stdio.h>
#include <stdlib.h>

int main(){

    //definindo variaveis
    char letra = 'x';

    //condicional simples
    if (letra == 'x'){
        printf("A letra eh x\n");
    }
    //mostra na tela o valor ASCII para a letra x
    printf("Codigo ASCII da letra %c eh = %d\n",letra, letra);

    if(letra == 120){
        printf("A letra eh x.\n");
    }
    system("pause");
    return 0;
}
