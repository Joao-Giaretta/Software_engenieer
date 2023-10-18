#include <iostream>

using namespace std;

int main(){
    int n, i;
    cout<<"Digite N: "; cin>>n;
    int vet[n];

    for(i = 0; i < n; i++){
        cin>>vet[i];
    }

    for(i = 0; i < n; i++){
        if(i == n-1){
            cout<<"Está Ordenado";
            break;
        }
        if(vet[i] > vet[i+1]){
            cout<<"Não está ordenado";
            break;
        }
    }

    return 0;
}