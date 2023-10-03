#include<iostream>
using namespace std;

int numberof1(int n){
    int count;
    while (n!=0)
    {
        n=n & n-1;
        count++;
    }
    return count;
    
    
}

int main(){
    cout<<numberof1(2)<<endl;

    return 0;
}