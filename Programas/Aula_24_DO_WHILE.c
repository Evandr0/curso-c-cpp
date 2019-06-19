#include <stdio.h>
#include <stdlib.h>

int main(){

    //variavel
    int a = 1;

    //contando até 10
    while(a <= 10){
        printf("%d\n", a);
        a++; // a = a + 1; //Incrementando 1 em a
    }
    a = 20;

    //do primeiro executa antes do while e depois confere a condicação.
    do{
        printf("%d\n", a);
        a++; // a = a + 1; //Incrementando 1 em a
    }while(a <= 10);{

    }


    system("pause");
    return 0;
}
