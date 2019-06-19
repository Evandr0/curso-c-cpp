#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    //definir variaveis
    bool a = true, b = false;

    //se a for verdadeiro
    if (a){
        printf("A eh verdadeiro\n");
    }

    //se b for false
    if(b){
        printf("B eh verdadeiro\n");
    }else{
    printf("B eh falso\n");
    }
    //comparando uma falsidade
    if(!b){
        printf("B eh falso2\n");
    }
    system("pause");
    return 0;
}
