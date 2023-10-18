/* Ler 3 valores X, Y, Z representando os comprimentos dos lados de
um triângulo. Verificar se eles podem ser os comprimentos dos lados
de um triangulo e, se forem, verificar se é um triângulo equilátero,
isósceles ou escaleno. Se eles não formarem um triângulo,
imprimir uma mensagem.
Antes de começar a elaboração do programa, observe as
propriedades e definições:
• Propriedade: o comprimento de cada lado de um triângulo é
menor do que a soma dos comprimentos dos outros dois lados.
• Definição 1: Chama-se triângulo equilátero ao triangulo que tem
os comprimentos dos três lados iguais;
• Definição 2: Chama-se triângulo isósceles ao triângulo que tem os
comprimentos de dois lados iguais. Portanto, todo triângulo
equilátero é também isóscele;
. Definição 3: Chama-se triângulo escaleno ao triângulo que tem os
comprimentos de seus três lados diferentes.*/

#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cout<<"Digite o valor do 1 lado: "; cin>>x;
    cout<<"Digite o valor do 2 lado: "; cin>>y;
    cout<<"Digite o valor do 3 lado: "; cin>>z;

    if (x < (y+z) && y < (x+z) && z < (y+x)){
        if(x==y && x==z){
            cout<<"Triângulo Equilátero";
        }
        else{
            if (x!=z && x!=y && y!=z){
                cout<<"Triângulo Escaleno";
            }
            else{
                cout<<"Triângulo Isósceles";
            }
        }
    }
    else{
        cout<<"Não se forma um trinâgulo";
    }

    return 0;
}