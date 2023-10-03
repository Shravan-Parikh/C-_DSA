#include<iostream>
using namespace std;

bool powerof2(int n){

    return(n && !(n & n-1));
}
int main(){
    cout<<powerof2(3)<<endl;

    return 0;
}