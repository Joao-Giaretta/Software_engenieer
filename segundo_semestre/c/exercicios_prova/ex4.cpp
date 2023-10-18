/*Construir um programa que faz a leitura de duas notas de um aluno,
N1 e N2, e os respectivos pesos, P1 e P2. O programa deve calcular a
média ponderada alcançada por aluno e apresentar:
a. A mensagem "Aprovado", se a média alcançada for maior ou
igual a sete;
b. A mensagem "Reprovado", se a média for menor do que sete;
c. A mensagem "Aprovado com Distinção", se a média for igual a
dez */

#include <iostream>

using namespace std;

int main(){
    float n1,n2,p1,p2,media;
    cout<<"Digite o valor da 1 nota: "; cin>>n1;
    cout<<"Digite o valor da 2 nota: "; cin>>n2;
    cout<<"Digite o peso da 1 nota: "; cin>>p1;
    cout<<"Digite o peso da 2 nota: "; cin>>p2;

    media = ((n1 * (p1/100)) +(n2 * (p2/100)));


    if (media >= 7){
        if (media == 10){
            cout<<"Media: "<<media<<"\n Aprovado com Distinção";
        }
        else{
            cout<<"Media: "<<media<<"\n Aprovado";
        }
    }
    else{
        cout<<"Media: "<<media<<"\n Reprovado";
    }


    return 0;
}

