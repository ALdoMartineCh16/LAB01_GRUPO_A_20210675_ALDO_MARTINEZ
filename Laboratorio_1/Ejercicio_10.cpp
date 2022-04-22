#include <iostream>

using namespace std;

int main(){
    
    int n, lis[10], i=0;
    do{
        cout<<"Escribe un numero en el rango de 100 a 999: ";cin>>n;
    }while(n<=100 || n>=999);
    
    cout<<n<<endl;
    while(n>=1){
        lis[i]=n%2;
        n = n/2;
        cout<<n<<endl;
        i++;
    }
    lis[i]=n;
    for(int j=0;j<i+1;j++){
        cout<<lis[j];
    }
    return 0;
}
