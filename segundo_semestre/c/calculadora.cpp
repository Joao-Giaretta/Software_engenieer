
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout<<fixed<<setprecision(2);
    char sinal='+';
    float op1,op2,resultado;
    char resp='s';
    while (resp == 's'){
        cin>>op1; cin>>sinal; cin>>op2;
        switch (sinal){
            case '+':
            resultado = op1 + op2;
            cout<<op1; cout<<sinal; cout<<op2; cout<<" = "; cout<<resultado;
            break;
            case '-':
            resultado = op1 - op2;
            cout<<op1; cout<<sinal; cout<<op2; cout<<" = "; cout<<resultado;
            break;
            case '*':
            resultado = op1 * op2;
            cout<<op1; cout<<sinal; cout<<op2; cout<<" = "; cout<<resultado;
            break;
            case '/':
            if (op2 == 0){
                cout<< "Erro: Divisão por Zero";
                break;
            }
            else{
                resultado = op1 / op2;
                cout<<op1; cout<<sinal; cout<<op2; cout<<" = "; cout<<resultado;
            }
            break;
            default:
            cout<<"Operador Invalido";
        }
        cout<<"\nDeseja fazer uma nova conta?"; cin>>resp;
    }
    return 0;
}