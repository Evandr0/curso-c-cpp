#include <stdio.h>
#include <stdlib.h>

int main(){

    //variavel
    int a = 1, b = 10;

    //contando até 10
    while(a <= 10){
        printf("%d\n", a);
        a++; // a = a + 1; //Incrementando 1 em a
    }

    //contagem regressiva
    while(b >= 1){
        printf("%d\n", b);
        b--; //b = b - 1; //Incrementando 1 em a
    }


    system("pause");
    return 0;
}
