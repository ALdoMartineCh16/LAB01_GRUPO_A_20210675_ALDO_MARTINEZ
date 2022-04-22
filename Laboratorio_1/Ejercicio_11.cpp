#include <iostream>

using namespace std;

int main(){
    int a;
    
    cout<<"N: ";cin>>a;
    int lis[a];
    
    for(int i=0;i<a;i++){
        cout<<"Number"<<i+1<<": ";cin>>lis[i];
    }
    
    int menor=lis[0],mayor=lis[0],media=0;
    
    for(int i=0;i<a;i++){
        if(lis[i]<lis[i+1]){
            mayor = lis[i];
        }
        if(lis[i]>lis[i+1]){
            menor = lis[i+1];
        }
        media += lis[i];
    }
    
    media = media/a;
    
    cout<<"El menor es "<<menor<<endl;
    cout<<"El mayor es "<<mayor<<endl;
    cout<<"El media es "<<media<<endl;
    
    return 0;
}
