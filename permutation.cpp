#include<iostream>
using namespace std;
void permute(int arr[],int idx,int n){
    int temp;
    if (idx==n-1)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    for (int i = idx; i < n; i++)
    {
        arr[i]=temp;
        arr[i+1]=arr[i];
        arr[i+1]=temp;
        permute(arr,idx+1,n);
    }
    
    
    
}
int main(){
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */cin>>arr[i];
    }
    permute(arr,0,n);

    
    return 0;
}