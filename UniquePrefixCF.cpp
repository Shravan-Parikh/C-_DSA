#include<iostream>
using namespace std;
int main(){
    int t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int check[2*10^5]=0;
        for (int i = 0; i < n; i++)
        {
            check[arr[i]]++;
        }
        
        
        
        
        

        
    }
    
    return 0;
}