// Construir um programa que faz a leitura de um número inteiro qualquer e imprime de ele é múltiplo de 5 ou não. 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Digite um numero Inteiro: "; cin>>n;
    if (n%5 == 0){
        cout<<n<<" É multiplo de 5";
    }
    else{
        cout<<n<<" Não é multiplo de 5";
    }
    
    
    return 0;
}