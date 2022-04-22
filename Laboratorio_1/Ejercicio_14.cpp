#include<iostream>

using namespace std;

int main(){

    int x,nota1,nota2,nota3;
    cout<<"Numero de estudiantes: ";cin>>x;
    for(int i=0;i<x;i++){
        int aux=0;

        cout<<"Estudiante "<<i+1<<endl;
        cout<<"Nota 1: ";cin>>nota1;
        cout<<"Nota 2: ";cin>>nota2;
        cout<<"Nota 3: ";cin>>nota3;
        aux = (nota1+nota2+nota3)/3;

        cout<<"Promedio: "<<aux<<endl;
    }

    return 0;
}
