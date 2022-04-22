#include<iostream>

using namespace std;

int main(){

    int x;
    cout<<"Ingrese un numero: ";cin>>x;

    for(int i=1;i<11;i++){
        cout<<x<<"x"<<i<<"="<<i*x<<endl;
    }
    return 0;
}
