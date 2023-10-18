#include <iostream>

using namespace std;

struct aluno{
    int ra;
    char nome[20];
    float nota;
};

aluno* lerAlunos(int *n){
    aluno *aux;
    cout<<"N: "; cin>>*n;
    aux = (aluno *)calloc(*n, sizeof(aluno));
    for (int i = 0; i < *n; i++)
    {
        cin>>aux[i].ra;
        cin.ignore();
        cin.getline(aux[i].nome, 20);
        cin>>aux[i].nota;
    }
    return aux;
}

float calculaMedia(aluno *al, int n){
    float media, soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += al[i].nota;
    }
    media = soma/n;
    return media;
}

void imprimir(aluno *al, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<al[i].nome<<al[i].ra<<al[i].nota<<endl;
    }
    
}

int main(){
    int n;
    float media;
    aluno *al;
    al = lerAlunos(&n);
    media = calculaMedia(al, n);
    cout<<"Média: "<<media;
    imprimir(al, n);
    
    return 0;
}