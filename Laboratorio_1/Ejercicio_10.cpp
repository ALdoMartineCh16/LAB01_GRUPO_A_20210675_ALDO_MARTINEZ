#include<iostream>

using namespace std;

int main(){

    int num, list[10], i=0;
    do{
        cout<<"Ingrese un numero entre 100 y 999: ";cin>>num; 
        if(num >= 100 && num <= 999){
            break;
        } 
    }while(true);
    
    while(num>1){
        list[i]=num%2;
        num=num/2;
        i++;
    }
    list[i] = num;
    
    for(int j=i;j>=0;j--){
        cout<<list[j];
    }
    return 0;
}
