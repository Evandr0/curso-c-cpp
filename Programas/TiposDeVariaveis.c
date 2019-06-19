#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //definindo variaveis
    int a;
    float b;
    char c;
    bool d; //devese instanciar a lib stdbool.h

    //passando valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true;

    //escrevendo na tela
    printf("O valor de a = %d\n", a);
    printf("O valor de b = %.2f\n", b);
    printf("O valor de c = %c\n", c);
    printf("O valor de d = %c\n", d);

    //lendo valores
    printf("Digite um valor para a\n");
    scanf("%d", &a);
    printf("Digite um valor para b\n");
    scanf("%f", &b);
    printf("Digite um valor para c\n");
    scanf(" %c", &c);
    printf("Digite um valor para d\n");
    scanf("%d", &d);

    //escrevendo na tela
    printf("O valor de a = %d\n", a);
    printf("O valor de b = %.2f\n", b);
    printf("O valor de c = %c\n", c);
    printf("O valor de d = %d\n", d);



    system("pause");
}
