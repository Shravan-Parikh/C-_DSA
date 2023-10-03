#include<iostream>
using namespace std;
void countSort(int arr[],int n){
    int k=arr[0];
    for (int i = 0; i < n; i++)
    {
        k=max(arr[0],arr[i]);
    }

    int count[10];
    for (int i = 0; i < n; i++)
    {
       count[arr[i]]++;
    }
    for (int i =1; i <=k+1; i++)
    {
        count[i]+=count[i-1];
    }
    int output[n];
    for (int i = n-1; i>=0; i--)
    {
       output[--count[arr[i]]]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */output[i]=arr[i];
    }
    
    
    
    
    
}

int main(){
    int arr[]={2,2,1,1,4,3,7,4,3};
    countSort(arr,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}