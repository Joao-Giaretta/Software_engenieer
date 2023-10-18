#include <iostream>
#include <stdio.h>


using namespace std;

int main(){
    char gabarito[10]={'a','b','c','d','e','a','b','c','d','e'};
    char respostas[10], nome[20];
    char frequencia[11]={0};
    int ra, total = 0, aprovados = 0, maior = 0, i, soma=0;
    float porcentagem, media=0;

    cout<<"SISTEMA DE CORREÇÃO DE PROVAS"<<endl;
    cout<<"(Digite 9999 no RA para encerar a digitação)\n";


    while (true)
    {
        do
        {
            cout<<"RA: "; cin>>ra;
        } while (ra<1000 || ra>9999);
        
        if(ra == 9999){
            break;
        }
        int nota = 0;
        cout<<"Nome: ";
        cin.ignore();
        cin.getline(nome,20);
        cout<<"Resposta: ";
        for(i=0; i<10; i++){
            cin>>respostas[i];
        }
        for(i=0; i<10; i++){
            if(respostas[i] == gabarito[i]){
                nota++;
            }
        }
        for(i=0; i<11; i++){
            if(nota == i){
                frequencia[i]++;
            }
        }
        if (nota >= 5){
            aprovados++;
        }
        cout<<"Ra: "<<ra<<endl;
        cout<<"Nome: "<<nome<<endl;
        cout<<"Nota: "<<nota<<endl;
        cout<<"---------------------------------------"<<endl;
        total++;
        soma += nota;
    }

    for (i = 0; i < 11; i++){
        if(frequencia[i] > maior){
            maior = i;
        }
    }

    porcentagem = (aprovados * 100)/total;
    media = float(soma)/total;

    cout<<"\nRelatório Final"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Porcentagem de Aprovação: "<<porcentagem<<"%"<<endl;
    cout<<"Nota com maior Frequência Absoluta: "<<maior<<endl;
    cout<<"Nota Média: "<<media<<endl;


    return 0;
}