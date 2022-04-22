#include <iostream>
using namespace std;

int main(){
    string hora;
    string min;
    int h, m;
    cout<<"Ingrese la hora en formato HH:MM? ";getline(cin,hora);
    cout<<"Minutos a agregar: ";getline(cin, min);
    h=stoi(hora.substr(0,2));  //TRANSFORMA EL STRING EN ENTERO
    m=stoi(hora.substr(3,2));

    // MANO AQUI PONES EL CODIGO DE AUMENTAR LA HORA
    if((m + stoi(min))>=60){
        if(m+stoi(min)==60){
            h += 1;
        }
        h=h+(stoi(min)/60);
        //Primer caso
        m=stoi(hora.substr(3,2))+stoi(min);
        m = m%60;
    }

    cout<<"Nueva hora: "<<h<<":"<<m<<endl;
}
