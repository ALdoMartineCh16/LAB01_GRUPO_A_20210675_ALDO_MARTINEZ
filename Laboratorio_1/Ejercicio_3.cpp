#include<iostream>

using namespace std;

int main(){

    string nombre,apellido1,apellido2,correo;

    cout<<"Nombre: ";getline(cin,nombre);
    cout<<"Apellido paterno: ";getline(cin,apellido1);
    cout<<"Apellido materno: ";getline(cin,apellido2);

    correo = nombre.substr(0,1);
    correo = correo.append(apellido1);
    correo = correo.append(apellido2.substr(0,1));

    int tamanio = correo.size();
    for(int i=0;i<tamanio;i++){
        correo[i] = tolower(correo[i]);
    }
    correo = correo.append("@unsa.edu.pe");

    cout<<correo;

    return 0;
}
