/// João Pedro Giaretta RA 23008717
/// Henrique Ladeira RA 23016926
/// Melissa Seleghin RA 23016066


#include <iostream>
#include <iomanip>

#define LINHAS 4
#define COLUNAS 27
#define NUMVOOS 10

using namespace std;

typedef struct {
    int numero_voo;
    char origem[20];
    char destino[20];
    int mapa_assentos[LINHAS][COLUNAS];
} voos;



int cabecalho();
void imprime_mapa(int mapa[][COLUNAS]);
void escolhe_assento(int mapa[][COLUNAS], char *letra, int *fileira);
void imprime_bilhete(voos reserva, char letra, int fileira);
int escolhe_voo(voos ALP[]);


int main(){
    int reserva;
    char letra;
    int fileira;
    voos ALP[NUMVOOS] = {  2334, "Campinas", "Brasilia", {0}, 3456, "Brasilia", "Campinas", {0}, 3354, "Campinas", "Salvador", {0}, 
    4534, "Salvador", "Joinville", {0}, 4567, "Joinville", "Campinas", {0}, 4565, "Brasilia", "Porto Alegre", {0}, 5422, "Campinas", 
    "Rio de Janeiro", {0}, 5624, "Campinas", "Recife", {0}, 5802, "Recife", "Campinas", {0}, 7022, "Campinas", "Belo Horizonte", {0}};

    while (cabecalho () != 0){
        reserva = escolhe_voo(ALP);
        imprime_mapa(ALP[reserva].mapa_assentos);
        escolhe_assento(ALP[reserva].mapa_assentos, &letra, &fileira);
        cout<<"\n RESERVA FEITA COM SUCESSO - VERIFIQUE MARCAÇAO DO SEU ASSENTO"<< letra <<fileira<< " NO MAPA\n";
        imprime_mapa(ALP[reserva].mapa_assentos);
        imprime_bilhete(ALP[reserva], letra, fileira);
    }

    return 0;
}

int cabecalho (){
    int res;
    cout << "BEM VINDO A CIA AEREA ALP\n";
    cout << "------------------------------\n";

    do
    {
        cout << "1 - Nova Reserva \n0 - Sair \nEscolha (1 ou 0): ";
        cin >> res;
    } while (res != 1 && res !=0);
    
    return res;
}

void escolhe_assento(int mapa[][COLUNAS], char *letra, int *fileira){
    while(true){
        int i, j;
        cout<<"Escolha o Assento\n";
        do
        {
            cout<<">>>> Letras <A, B, C ou D>: "; cin>>*letra;
        } while (*letra != 'A' && *letra != 'B' && *letra != 'C' && *letra !='D');
        
        do
        {
            cout<<">>>> Fileira <1 a 27>: "; cin>>*fileira;
        } while (*fileira < 1 || *fileira > 27);
        
        
        
        j = (*fileira - 1);
        switch (*letra)
        {
        case 'A':
            i = 0;
            break;
        case 'B':
            i = 1;
            break;
        case 'C':
            i = 2;
            break;
        case 'D':
            i = 3;
            break;
        default:
            cout<<"Escolha A, B, C ou D";
            break;
        }

        if (mapa[i][j] == 0){
            mapa[i][j] = 1;
            return;
        }
        else{
            cout<<"Assento está ocupado"<<endl;
        }
    }
}

void imprime_bilhete(voos reserva, char letra, int fileira){
    char nome[20];
    cout<<"------------------------------------"<<endl;
    cout<<" Preparando para emissão do Bilhete"<<endl;
    cout<<"Digite o nome do Passageiro: ";
    cin.ignore();
    cin.getline(nome,20);
    cout<<"\n----------------------------------"<<endl;
    cout<<"Nome: "<<nome<<endl;
    cout<<"Numero do Voo: "<<reserva.numero_voo<<endl;
    cout<<"Origem: "<<reserva.origem<<endl;
    cout<<"Destino: "<<reserva.destino<<endl;
    cout<<"Assento: "<<letra<<fileira<<endl;
    cout<<"------------------------------------"<<endl;
}

void imprime_mapa(int mapa[][COLUNAS]){
    int i;
    cout<<"-----------------------------------\n";
    cout<<"VOO: 2334"<<"    "<<"DE: Campinas"<<"    "<<"PARA: Brasília"<<endl;
    cout<<"MAPA DE LUGARES"<<endl;
    cout<<"A";
    for (i=0; i<COLUNAS; i++){
        cout<<setw(3)<<mapa[0][i];
    }
    cout<<endl;
    cout<<"B";
    for (i=0; i<COLUNAS; i++){
        cout<<setw(3)<<mapa[1][i];
    }
    cout<<endl;
    cout<<"C";
    for (i=0; i<COLUNAS; i++){
        cout<<setw(3)<<mapa[2][i];
    }
    cout<<endl;
    cout<<"D";
    for (i=0; i<COLUNAS; i++){
        cout<<setw(3)<<mapa[3][i];
    }
    cout<<endl;
    for ( i = 1; i <= 27; i++)
    {
        cout<<setw(3)<<i;
    }
    cout<<endl;
}

int escolhe_voo(voos ALP[]){
    int resp;
    do{
        cout<<"Escolha seu voo:"<<endl;
        for (int i = 0; i < 10; i++)
        {
            cout<<i+1<<" - "<<" Voo: "<<ALP[i].numero_voo<<" DE: "<<ALP[i].origem<<" PARA: "<<ALP[i].destino<<endl;
        }
        cout<<"Escolha < de 1 a 10 >: ";
        cin>>resp;
    } while (resp < 1 || resp > 10);
    return resp-1;
}