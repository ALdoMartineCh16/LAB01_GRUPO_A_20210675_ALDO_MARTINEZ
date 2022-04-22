#include <iostream>

using namespace std;

int main(){
    float n;
    int m;
    cout<<"Numero: ";cin>>n;
    m = int(n);
    if(n-m<0.5){
        cout<<m;
    }else{
        cout<<m+1;
    }
    
    return 0;
}
