/*Escreva um programa que calcule e imprima o somatório descrito
abaixo, onde N deverá ser lido e deverá ser maior do que 10 e
menor do que 100. Validar se o valor de N atende a condição. Se
não atender, repetir a digitação até que seja digitado um valor válido.
Use do/while para essa validação.

𝑆 = √1 + √2 + √3 + √4 + √5 + ⋯ + √𝑁*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,i;
    float soma = 0;
    do{
        cout<<"Digite o valor de N: "; cin>>n;
    } while (n < 10 || n > 100);

    for (i=1; i <= n; i++){
        soma = soma + sqrt(i);
    }
    cout<<soma<< endl;
    return 0;
}