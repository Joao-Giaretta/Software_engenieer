//Dada a equação do segundo grau: ax2 + bx + c. Elabore um programa
//que calcule as raízes desta equação.

#include <iostream>
#include <math.h>

using namespace std;

int main (){
    float a,b,c,x1,x2;
    int delta;
    do{
        cout<<"Digite o Valor de a: "; cin>>a;
    } while (a == 0);
    cout<<"Digite o Valor de b: "; cin>>b;
    cout<<"Digite o Valor de c: "; cin>>c;

    delta = ((b*b) + (4*a*c));

    if (delta == 0){
        x1 = (((b*-1) + sqrt(delta))/(2*a));
        cout<<"Raiz da equação: "<<x1;
    }
    if (delta > 0){
        x1 = (((b*-1) + sqrt(delta))/(2*a));
        x2 = (((b*-1) - sqrt(delta))/(2*a));
        cout<<"1 Raiz da equação: "<<x1;
        cout<<"2 Raiz da equação: "<<x2;

    }
    else{
        cout<<"Não existe raiz para essa equação";
    }

    
}