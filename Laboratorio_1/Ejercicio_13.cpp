#include<iostream>

using namespace std;

int main(){

    int a,b;
    cout<<"Primer numero: ";cin>>a;
    cout<<"Segundo numero: ";cin>>b;
    if(a % b == 0){
        cout<<b<<" es divisor de "<<a;
    }
    else if(b % a == 0){
        cout<<a<<" es divisor de "<<b;
    }
    else{
        cout<<"No son divisibles entre sí";
    }

    return 0;
}
