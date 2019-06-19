#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //Definindo variaveis
    int a = 6, b = 3;

    //Soma
    printf("A soma de a e b = %d\n", a + b);
    printf("A soma de %d e %d = %d\n",a,b, a + b);

    //Subtrcação
    printf("A subtracao de %d e %d = %d\n",a,b, a - b);

    //Divisão
    printf("A divisao de %d e %d = %d\n",a,b, a / b);

    //Multiplicação
    printf("A multiplicacao de %d e %d = %d\n",a,b, a * b);

    //Resto da divisão
    printf("O resto da divisao de %d e %d = %d\n",a,b, a % b);

    //Valor absoluto == transforma valor negativo em positivo
    printf("O valor absoluto de -3 = %d\n", abs(-3)); //abs(a)   ou abs(a+b) etc.

    system("pause");
}
