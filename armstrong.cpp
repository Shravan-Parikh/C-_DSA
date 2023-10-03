#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int a;
    cin>>a;
    int sum=0;
    int n=a;


    while (a>0)
    {
       int lastdigit=a%10;
       sum+=pow(lastdigit,3);
       a=a/10;

    }
    if (sum==n)
    {
        cout<<"is a armstrong number"<<endl;
    }
    else{
        cout<<"is not a armstrrong number"<<endl;
    }
    
    


    return 0;
}