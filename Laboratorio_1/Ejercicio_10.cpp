#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int num;
    while(true){
        cout<<"Ingrese un numero entre 100 y 999: ";cin>>num; 
        if(num >= 100 && num <= 999){
            break;
        } 
    }

    for(int i=9;i>=0;i--){
        if(num >= pow(2,i)){
            cout<<"1";
            num = num - pow(2,i);
        }
        else{
            cout<<"0";
        }
    }

    return 0;
}
