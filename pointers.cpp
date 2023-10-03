#include<iostream>
using namespace std;
int main(){

    char a='s';
    char*add_pointer_t=&a;
    cout<<add_pointer_t<<endl;
    add_pointer_t++;
    cout<<add_pointer_t;


    return 0;
}