#include<iostream>
using namespace std;
int main(){

    // char a='s';
    // char*aptr=&a;
    // cout<<aptr<<endl;
    // aptr++;
    // cout<<aptr;

    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *ptr=arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<endl;
        // ptr++;
    }
    

    return 0;
}