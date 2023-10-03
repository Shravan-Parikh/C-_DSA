#include <iostream>
#include <vector>
using namespace std;

int main(){

    int b,a,x,n;
    vector<int>v;
    cin>>n;
    a=1;
    b=2;
    
    for (int i = 0; i < n; i++)
    {
        x=b*b-a*a;
        v.push_back(x);
        b++;
        a++;
        
       
    }
    cout<<v[n-1];
    

  
    return 0;
}