#include<iostream>

using namespace std;

int main(){
    string palabra;
    cout<<"Introduce una palabra: ";getline(cin,palabra);
    for(int i=palabra.length();i>=0;i--){
        cout<<palabra.substr(i,1);
    }
    return 0;
}
