#include <iostream>

using namespace std;


int main(){
    int n, i, k;
    cout<<"Digite N: "; cin>>n;
    int vet[n];

    for(i=0; i<n; i++){
        cout<<"Digite o vetor: "<<i+1<<endl;
        cin>>vet[i];
    }

    cout<<"Digite o Valor de K: "; cin>>k;

    for(i=0; i<n; i++){
        cout<<vet[i]<<" * "<<k<<" = "<<vet[i]*k<<endl;
    }



    return 0;
}