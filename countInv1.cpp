#include<iostream>
using namespace std;
void countINV(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                ans++;
            }
        }
        
    }
    cout<<ans;
    
}
int main(){

    int arr[]={3,5,6,9,1,2,7,8};
    countINV(arr,8);
    // cout<<"helpp";

    return 0;
}