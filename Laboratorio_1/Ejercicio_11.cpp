#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,mayor,menor,aux;
    float media=0;
    cout<<"Cantidad de numeros: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Numero: ";cin>>aux;
        if(i==0){
            mayor = aux;
            menor = aux;
        }
        if(menor > aux){
            menor = aux;
        }
        if(mayor < aux){
            mayor = aux;
        }
        media += aux;
    }
    cout<<"Numero menor: "<<menor<<endl;
    cout<<"Numero mayor: "<<mayor<<endl;
    cout<<"Media: "<<media/n;
    return 0;
}
