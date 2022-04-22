#include<iostream>

using namespace std;

int primo(int);

int main(){
    int count =0,x,y;
    cout<<"Ingrese el valor de x: ";cin>>x;
    cout<<"Ingrese el valor de y: ";cin>>y;

    if(x == 0 || x == 1){
        x = 2;
    }

    for(int i=x;i<y;i++){
        int num = primo(i);
        if(num != 0){
            cout<<num<<endl;
            count++;
        }
    }
    if(count == 0){
        for(int i=1;i>0;i++){

            int aux = x + i;
            int aux1 = x - i;
            int temp = y + i;
            int temp1 = y - i;

            if(primo(aux) != 0){
                cout<<primo(aux);
                break;
            }
            if(primo(aux1) != 0){
                cout<<primo(aux1);
                break;
            }
            if(primo(temp) != 0){
                cout<<primo(temp);
                break;
            }
            if(primo(temp1) != 0){
                cout<<primo(temp1);
                break;
            }
        }
    }

    return 0;
}

int primo(int num){
    int cad = 0;
    for(int j=1;j<=num;j++){
        if(num%j==0){
            cad++;
        }
    }
    if(cad <= 2){
        return num;
    }
    return 0;
}
