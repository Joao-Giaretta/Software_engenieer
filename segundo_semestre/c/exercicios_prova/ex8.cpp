/*Fazer um programa para calcular e escrever o valor do somatório de
N termos do somatório abaixo. O valor de N e de X devem ser lidos.
Além disso o valor de N deve ser positivo e menor do que 50. Validar
se o valor de N é positivo e menor do que 50. Se não for, repetir a
digitação até que seja digitado um valor válido. Use do/while para
essa validação.
𝑆 = 𝑋 − 𝑋2/3! + 𝑋4/5! − 𝑋6/7! +... */

#include <iostream>

using namespace std;

int main(){
    int n;
    float x, soma = 0;
    do{
        cout<<"Digite o valor de N: ";cin>>n;
    } while (n > 0 && n < 50);
    cout<<"Digite o valor de X: "; cin>>x;
    
    




    return 0;
}