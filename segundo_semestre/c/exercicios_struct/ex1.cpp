/*
Construir um programa que faça a leitura de N nomes de cidades, onde N deve ser lido. Armazenar os nomes
das cidades num vetor de string: char cidades [N][31]. Após a leitura dos N nomes, em um processo repetitivo:
ler o nome de uma cidade e verificar se o nome da cidade lido, pertence ou não ao conjunto de N nomes de
cidades. Interromper a leitura se for digitado ‘*’ no nome da cidade. Imprimir a mensagem: “Cidade “ <nome
da cidade lido> “consta da lista” ou ”não consta da lista"
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int i, N;
    cout<<"Quantidade de cidades: "; cin>>N;
    char cidades[N][31];
    char nome [31];
    int result;

    cin.ignore();
    for (i = 0; i < N; i++)
    {
        cin.getline(cidades[i], 31);
    }

    while(true){
        cout<<"Digite a cidade(Digite X para parar): ";
        cin.getline(nome, 31);
        if (nome[0] == 'X'){
            break;
        }  
    
        for (i = 0; i < N; i++){
            result = strcasecmp(nome,cidades[i]);
            if(result == 0){
                cout<<"Cidade: "<<nome<<", Consta na lista"<<endl;
                break;
            }
            if(i == N-1){
                cout<<"Cidade: "<<nome<<", Não Consta na lista"<<endl;
                break;
            }
        }
    }


    return 0;
}