#include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int r;
    cin>>r;
    int a;
    int arr[N-1];
    for (int i = 0; i < N; i++)
    {
        cin>>a;
        arr[i]=a;

    }
    for (int i = 0; i < N; i++)
    {
        if(arr[i]>=r){
            cout<<"Good boii"<<endl;
        }
        else{
            cout<<"Bad boii"<<endl;
        }
    }
    
    
    



    return 0;
}