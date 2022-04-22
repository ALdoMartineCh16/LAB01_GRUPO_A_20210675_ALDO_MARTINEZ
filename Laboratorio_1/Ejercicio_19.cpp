#include<iostream>

using namespace std;

int main(){
    string password;
    cout<<"Ingrese su contraseña: ";getline(cin,password);
    while(true){
        string aux;
        cout<<"Vuelva a ingresar su contraseña: ";getline(cin,aux);
        if(aux == password){
            cout<<"Contraseña correcta";
            break;
        }
        else{
            cout<<"Contraseña incorrecta"<<endl;
        }
    }
}
