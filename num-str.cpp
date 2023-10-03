#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string num="5326545614";
    //string max;
    sort(num.begin(),num.end(),greater<int>());
    cout<<num<<endl;
    // for (int i = num.length(); i >=0; i--)
    // {
    //     max+=num[i];
    // }
    // cout<<max;
    


    return 0;
}