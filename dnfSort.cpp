#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnfSort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid>=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}
int main(){
    int arr[]={1,1,2,2,0,0,0,0,2,1,1,1};
    dnfSort(arr,12);
    for (int i = 0; i < 12; i++)
    {
        /* code */cout<<arr[i]<<" ";
    }
    
    
    return 0;
}