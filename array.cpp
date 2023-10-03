#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    int arr[n];
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;

    for (int i = 0; i <n; i++)
    {
       if (arr[i]>max)
       {
          max=arr[i];
       }
       if (arr[i]<min)
       {
          min=arr[i];
       }

       
       
    }

    cout<<" maximum "<<max;
    cout<<" minimum "<<min;
    
    

     

    return 0;
} 