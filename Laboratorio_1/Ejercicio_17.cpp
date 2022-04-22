#include<iostream>

using namespace std;

int main(){
    int aux,suma=0;
    for(int i=0;i<10;i++){
        cout<<"Escribe un numero: ";cin>>aux;
        if(aux < 0){
            suma += aux;
        }
    }
    cout<<suma;
    return 0;
}
