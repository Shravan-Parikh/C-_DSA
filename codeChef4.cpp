#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        int L,R,count=0;
        vector<int>v;

        cin>>L;
        cin>>R;
        if(L<=R){
            for (int i = L; i <=R; i++)
            {
                for (int j = L; j <=R; j++)
                {
                    v.push_back(i+j);
                }
                
            }
        }
        int n=v.size();
        int arr[n];
        int a[R+R+1]={0};
        for (int i=0;i<n;i++)
        {
            arr[i]=v[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[arr[i]]=1;
        }
        for (int i = 0; i < R+R+1; i++)
        {
            if(a[i]==1){
                count++;
            }
        }
        

        
        
        cout<<count;
    }
    
    return 0;
}