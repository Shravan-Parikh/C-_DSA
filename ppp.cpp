#include<iostream>
using namespace std;
void increment(int *a){
    *a++;
}


int main(){
    int a=2;
    int *aptr=&a;
    increment(&a);
    cout<<a<<endl;

    return 0;
}