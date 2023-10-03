#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
        cout<<"max integer:"<<a<<endl;
        }
        else{
            cout<<"max integer: "<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"max integer: "<<b<<endl;
        }
        else{
             cout<<"max integer: "<<c<<endl;
        }
    }
    return 0;
}

