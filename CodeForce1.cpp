#include<iostream>
using namespace std;
int lcm(int a, int b){
    int x=1;
    do
    {
        if (x%a==0 && x%b==0)
        {
            return x;
        }
        else{
            x++;
        }

        
    } while (true);

}
int gcd(int a,int b){
    int res=min(a,b);
    do
    {
        if (a%res==0 && b%res==0)
        {
            return res;
        }
        else{
            res--;
        }
        
        
    } while (true);
    
}
int main(){
    // int t;
    // cin>>t;
    // for (int i = 0; i < t; i++)
    // {
       int n;
       int count=0;
       cin>>n;
       for (int i = 1; i < n+1; i++)
       {
        for (int j = 1; i < n+1; j++)
        {
            int x=lcm(i,j)/gcd(i,j);
            if (x<=3)
            {
                count++;
            }
            
       }
      cout<<count<<endl; 
    }
// }
    return 0;
}