#include<iostream>

using namespace std;

int main(){

    int count =0;

    for(int i=2;i>0;i++){
        int cad=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cad++;
            }
        }
        if(cad <= 2){
            cout<<i<<endl;
            count++;
        }
        if(count >= 50){
            break;
        }
    }

    return 0;
}
