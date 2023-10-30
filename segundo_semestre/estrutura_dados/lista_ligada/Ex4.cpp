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

int verificar(no*pri){
    no* ant = pri;
    for (; pri!=NULL; pri=pri->link){ 
        if (ant->info > pri->info)
        {
            return 0;
        }
        ant = pri;
    }
    return 1;
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
    adicionar(&pri, 3);
    adicionar(&pri, 5);
    adicionar(&pri, 2);
    adicionar(&pri, 4);
    int num=verificar(pri);

    if(num==0) {
        cout << "Lista Desordenada";
    }
    else {
        cout << "Lista Ordenada";
    }
   
    return 0;
}