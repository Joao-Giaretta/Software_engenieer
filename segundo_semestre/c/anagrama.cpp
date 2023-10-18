#include <stdio.h>
#include <iostream>
#include <string.h>
#define TAM1 30
#define TAM2 20


using namespace std;

int cabecalho (){

    int res;

    cout << "-----------------------------";
    
    cout << "JOGO ANAGRAMA\n Regras:\n --> Forme palavras com as letras do quadro\n --> Total de 30 palavras.\n --> tentativas erradas o jogo encerra. ";

    do
    {
        cout << "";
        cin >> res;
    } 

    while (res != 1 && res !=0);
    return res;

}

void imprimir_letras(){
    for (int i = 0; i < TAM2; i++){
        if (i % 5 == 0){
            cout << endl;
        }
        cout << " " << vetor_letras[i];
    }
};

int main(){
    
    int acertos;
    char bancoPalavras[TAM1][15] = {"Romance", "Desconto", "Banda", "Fofo",  "Bala", "Torção", "Fome", "Fogo", "Medo", "Sorvete", "Banco", "Fina", "Logo", "Mão", "Rosa","Dança","Rato","Boina","Samba","Bingo","Bares","Limão","Garfo","Ração","Cobra","Foca","Faixa","Bonito","Barco","Mina"};
    char palavra_lida[15];
    char bancoAcertos[TAM1][15];
    char vetor_letras[TAM2] = {'O','A','E','D','M', 'C', 'X', 'O', 'I','L', 'N', 'R', 'S', 'A', 'O','T','B','F','G','N'};

    cabecalho();


    cout << "Digite uma palavra formada pelas letras acima";
    
    return 0;
}