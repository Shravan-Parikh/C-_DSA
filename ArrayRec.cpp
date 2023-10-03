#include<iostream>
using namespace std;

int firstocc(int arr[],int n, int i, int key){
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return firstocc( arr, n, i+1, key);



}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int ans=lastocc(arr,n,i+1,key);
    if(ans!=-1){
        return ans;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */cin>>arr[i];
    }
    cout<<firstocc(arr,n,0,2)<<endl;;
    cout<<lastocc(arr,n,0,2);
    
    


    

    return 0;
}