#include <stdio.h>
#include <stdlib.h>

int main(){

    //variaveis
    int cont, cont2, cont3;
    cont = 1;
    cont2 = 1;
    cont3 = 1;

    for(cont3 = 1; cont3 <=10; cont3++){
    //contando até 10
    for(cont = 1; cont <= 10; cont++){
        printf("%d X %d = %d\n", cont, cont3, cont * cont3);
    }
    }
    system("pause");
    return 0;
}
