#include<iostream>
using namespace std;

int main(){

    int col, row;
    cin>>row>>col;

    for (int i = 1; i<=row; i++)
    {
        for (int j = 1; j<=col; j++)
        {
            if(i=1 || j==col){
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
    

    return 0;
}