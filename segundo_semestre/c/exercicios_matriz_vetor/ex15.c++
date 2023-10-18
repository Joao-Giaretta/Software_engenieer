#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int i;
    char frase[1000];
    cout<<"Digite uma frase: ";

    cin.getline(frase, 1000);
    int comp = strlen(frase);

    for(i=0; i < comp/2; i++){
        if(i == (comp/2)-1){
            cout<<"Palíndromo";
            break;
        }
        if(frase[i] != frase[comp-i-1]){
            cout<<"Não é palíndromo";
            break;
        }
    }
        
    return 0;
}