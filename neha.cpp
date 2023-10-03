#include<iostream>
using namespace std;

int main(){
    int pm=3000,date;
    cin>>date;
    for ( date ; date <= 30;date++)
    {
        if(date%2==0){
            continue;
        }
        if(pm==0){
            break;
        }
        cout<<"you can go out"<<endl;
        pm=pm-300;
    }
    
    

    return 0;
}