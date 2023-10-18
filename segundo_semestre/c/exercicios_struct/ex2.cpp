/*
Construir um programa que faça a leitura de N nomes de pessoas, onde N deve ser lido. Armazenar os nomes
das pessoas num vetor de string: char nomes [N][51]. Após a leitura dos N nomes, verificar se há homônimos
na lista. Imprimir o(s) nomes homônimos. 
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int N, i, j;
    cout<<"Digite a quantidade de pessoas: "; cin>> N;
    char nomes[N][51];
    cin.ignore();

    for (i = 0; i < N; i++)
    {
        cin.getline(nomes[i], 51);
    }

    for (i = 0; i < N; i++){
        for (j = i+1; j < N; j++){
                if (strcasecmp(nomes[j],nomes[i]) == 0){
                    cout<< nomes[j]<<endl;
            }
        }
    }
    return 0;
}