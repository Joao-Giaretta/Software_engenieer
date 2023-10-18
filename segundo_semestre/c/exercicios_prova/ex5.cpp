/* Faça um programa que calcule o reajuste do salário de um funcionário.
Considere que o funcionário deverá receber um reajuste de 15%, caso
seu salário seja menor que R$500,00; se o salário for maior ou igual a
R$500,00, mas menor ou igual a R$1000,00, seu reajuste será de
10%; caso seja ainda maior que R$1000,00, o reajuste deverá ser de
5%*/

#include <iostream>

using namespace std;

int main (){
    float salario_ant, salario_atual;
    cout<<"Digite o valor do salario: "; cin>>salario_ant;
    
    if (salario_ant > 1000){
        salario_atual = (salario_ant * 1.05);
        cout<<"Novo salário: "<<salario_atual;
    }
    else {
        if (salario_ant >= 500){
            salario_atual = (salario_ant * 1.10);
            cout<<"Novo salário: "<<salario_atual;
        }
        else{
            salario_atual = (salario_ant * 1.15);
            cout<<"Novo salário: "<<salario_atual;
        }
    }


    return 0;
}