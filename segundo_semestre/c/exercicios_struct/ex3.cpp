/*
Construir um programa que faz a leitura de informações de N produtos: (código: inteiro, nome: string, preço:
real e quantidade_estoque: inteiro) e imprime apenas os produtos que estão com a quantidade em estoque
zerada. Primeiro deverá ser definida uma struct para o produto. Fazer a leitura de informações de N produtos
(N deverá ser lido) armazenando-as num vetor de struct. Após a leitura e armazenamento dos dados de N
produtos. Imprimir os dados(TODOS), apenas dos produtos, cuja quantidade em estoque seja igual a zero.
Imprima no formato de uma tabela.
*/

#include <iostream>
#include <string>

using namespace std;

struct produtos
{
    int codigo;
    char nome[20];
    float preco;
    int qnt;
};


int main(){
    int N, i;
    cout<<"Digite a quantidade de produtos: "; cin>>N;
    produtos prod[N];

    for (i = 0; i < N; i++)
    {
        cout<<"Código Produto: "; cin>>prod[i].codigo;
        cout<<"\nNome do produto: ";
        cin.ignore();
        cin.getline(prod[i].nome, 20);
        cout<<"\nPreço: "; cin>>prod[i].preco;
        cout<<"\nQuantidade Estoque: "; cin>>prod[i].qnt;
    }
    
    for (i = 0; i < N; i++)
    {
        if (prod[i].qnt == 0)
        {
            cout<<"Código Produto "<<" Nome do produto "<<" Preço "<<" Qtd Estoque "<<endl;
            cout<<prod[i].codigo<<" "<<prod[i].nome<<"  "<<prod[i].preco<<" "<<prod[i].qnt;
        }
    }


    return 0;
}