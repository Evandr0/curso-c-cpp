#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    //definir variaveis
    bool a = true, b = false;

    //se A for verdadeiro
    if(a){
        printf("A eh verdadeiro\n");
    }

    //se B for falso
      if(b){
        printf("B eh verdadeiro\n");
    }else{
    printf("B eh falso\n");
    }
    if(!b){
        printf("B eh falso\n");
    }
    system("pause");
    return 0;
}
