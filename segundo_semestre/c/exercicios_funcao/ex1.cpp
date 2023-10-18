#include <iostream>

using namespace std;

float volume_cilindro(float raio, float alt){
    float volume;
    volume = 3.14*(raio*raio)*alt;
    return volume;
}

int main(){
    float raio, alt, volume;
    cout<<"Raio: "; cin>>raio;
    cout<<"Altura: "; cin>>alt;

    volume = volume_cilindro(raio, alt);
    cout<<"Volume: "<<volume;

    return 0;
}