#include <iostream>
#include <cstdlib>

using namespace std;

typedef int elemento;
typedef struct no{
    elemento info;
    no * link;
}no;

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

int repetidos(no*pri){
    no* p;
    p = pri;
    while (p!=NULL)
    {
        no* prox = p->link;
        while (prox!=NULL)
        {
            if(prox->info == p->info){
                return 1;
            }
            prox = prox->link;
        }
        p = p->link;
    }
    return 0;
}

void adicionar(no* *pri, elemento a){
    no *p;
    p = (no*)malloc(sizeof(no));
    p -> info = a;
    p -> link = *pri;
    *pri = p; // Ligação entre o pri e o ponteiro pri para adiconar o proximo valor. LEMBRAR DO DESENHO DO QUADRADO DAS AULAS.
};

int main(){
    no * pri;
    pri = init();

    adicionar(&pri, 1);
    adicionar(&pri, 2);
    adicionar(&pri, 4);
    adicionar(&pri, 3);
    adicionar(&pri, 1);
    int num=repetidos(pri);

    if(num==1) {
        cout << "Existem elementos repetidos";
    }
    else {
        cout << "Nao existem elementos repetidos";
    }
   
    return 0;
    return 0;
}

