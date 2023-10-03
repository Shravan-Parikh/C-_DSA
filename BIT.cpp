#include<iostream>
using namespace std;

int CheckBit(int n, int pos)
{
    return((n & (1<<pos))!=0);

}
int setbit(int n,int pos){
    return((n | (1<<pos));
}



int main(){
    cout<<CheckBit(5,2);
    cout<<setBit(5,2);
    return 0;
}