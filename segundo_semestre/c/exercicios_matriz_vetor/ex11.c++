#include <iostream>

using namespace std;

int main(){
    int N, M, i, j, K, soma=0;
    cout<<"Digite N e M:"; cin>>N; cin>>M;
    int A[N][M];
    for(i=0; i < N; i++){
        for(j=0; j < M; j++){
            cin>>A[i][j];
        }
    }

    cout<<"Digite a linha q desenha somar da matriz: ";
    do{cin>>K;} while (K > N);
    
    for(j =0; j < M; j++){
        soma += A[K-1][j];
    }
    cout<<"Resutado: "<<soma<<endl;

    return 0;
}