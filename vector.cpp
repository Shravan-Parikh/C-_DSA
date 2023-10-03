#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>shr1;
    shr1.push_back(1);
    shr1.push_back(2);
    shr1.push_back(3);

    for (int i = 0; i < shr1.size(); i++)
    {
        /* code */cout<<shr1[i]<<" ";
    }
cout<<endl;
    for (auto element:shr1)
    {
        cout<<element<<" ";
    }
    
    
    

    return 0;
}
