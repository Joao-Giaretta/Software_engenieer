#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct {
    int ra;
    char nome[31];
    float nota;
}aluno;

typedef aluno elemento;

typedef struct no{
    elemento info;
    no * link;
}no;

no* init();

no* novo_no();

int comp (no**);

void inserir_inicio(no**pri, elemento a);

int main(){

    return 0;
}

no* init(){
    return NULL;
}

no* novo_no (){
    no* novo;
    novo = (no*) malloc(sizeof(no));
    if(novo == NULL) {
    cout<<"\n ERRO: alocacao de memoria!" ;
    exit(1);}
    return novo;
}

int comp(no*pri){
    int conta;
    for(conta=0; pri!=NULL; pri=pri->link) 
        conta++;
    return conta;
}

void inserir_inicio(no**pri, elemento a){
    no*novo=novo_no();
    novo->info=a;
    novo->link=*pri;
    * pri = novo;
}