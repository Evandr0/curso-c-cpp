#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //responsavel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //variavel que recebe o resto da divisao do numero por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;
    //variavel que recebe o resto da divisao do numero por 3 (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;
    //imprime
    printf("primeiro %d\n", aleatorio);
    printf("Segundo %d\n", aleatorioSegundo);
    system("pause");
    return 0;
}
