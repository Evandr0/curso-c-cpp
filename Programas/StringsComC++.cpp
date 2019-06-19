#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(){

    string palavra;

    printf("Digite uma palavra:\n"); //ou  cout << "Digite uma palavra"

    cout << "Digite uma palavra\n";

    cin >> palavra;

    cout << "A palavra eh: \n" << palavra << "\n";



    system("pause");
    return 0;
}
