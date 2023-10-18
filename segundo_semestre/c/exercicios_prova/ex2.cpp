//Faça um algoritmo que leia dois valores inteiros A e B. Se os valores
//forem iguais deverá somar os dois, caso contrário multiplique A por B.
//Ao final de qualquer um dos cálculos deve-se atribuir o resultado para
//uma variável C e mostrar seu conteúdo na tela

#include <iostream>

using namespace std;

int main (){
    int a,b, c;
    cout<<"Digite o primeiro numero: "; cin>>a;
    cout<<"Digite o segundo numero: "; cin>>b;

    if (a==b){
        c = a+b;
    }
    else{
        c = a*b;
    }
    cout<<c;


    return 0;
}