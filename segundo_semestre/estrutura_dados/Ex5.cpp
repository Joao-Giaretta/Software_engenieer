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

int numero_repetido(no* pri, float *porcentagem){
    elemento numero = pri->info;
    int Maxcontagem = 1;
    int quantidade_numeros = 0;

    no* p = pri;
    while (p != NULL)
    {
        int contador = 0;
        no * j = pri;

        while (j != NULL)
        {
            if (j ->info == p ->info){
                contador ++;
            }
            j = j->link;
        }

        if (contador > Maxcontagem){
            Maxcontagem = contador;
            numero = p->info;
        }
        p = p->link;
    }
       
    while (pri!=NULL)
    {
        quantidade_numeros++;
        pri = pri->link;
    }

    *porcentagem = ((Maxcontagem * 100)/quantidade_numeros);
    return numero;
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
    float porcentagem;
    int numero;
    adicionar(&pri, 1);
    adicionar(&pri, 1);
    adicionar(&pri, 5);
    adicionar(&pri, 2);
    adicionar(&pri, 2);
    adicionar(&pri, 2);
    numero = numero_repetido(pri, &porcentagem);
    cout<<numero<<" "<<porcentagem;
   
    return 0;
}