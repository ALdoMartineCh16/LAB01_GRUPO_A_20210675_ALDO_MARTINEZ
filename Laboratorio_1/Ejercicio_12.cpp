#include<iostream>

using namespace std;

int main(){

    int n = 10,a=0,b=1;

    for(int i=0;i<n;i++){
        a = a + b;
        cout<<a<<"  ";
        b = b + a;
        cout<<b<<"  ";
    }

    return 0;
}
