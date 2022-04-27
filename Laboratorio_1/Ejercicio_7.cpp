#include <iostream>
using namespace std;

int main(){
    string hora;
    string min;
    int h, m, agregar;
    cout<<"Ingrese la hora en formato HH:MM? ";getline(cin,hora);
    cout<<"Minutos a agregar: ";getline(cin, min);
    h=stoi(hora.substr(0,2));  //TRANSFORMA EL STRING EN ENTERO
    m=stoi(hora.substr(3,2));
    agregar=stoi(min);

    h+=agregar/60;
    m+=agregar%60;
    if(m>=60){
        h++;
        m-=60;
    }
    while(h>=24){
        h-=24;
    }
    
    if(h>12){
            cout<<"Nueva hora: "<<h-12<<":"<<m<<" P.M"<<endl;
        }
        else if(h==12){
            cout<<"Nueva hora: "<<h<<":"<<m<<" P.M."<<endl;
        }
            else{
            cout<<"Nueva hora: "<<h<<":"<<m<<" A.M"<<endl;
        }
    
}
