#include<iostream>
using namespace std;
void test(){
    int bags,Nokids;
    cin>>bags;
    cin>>Nokids;
    int arr[bags];
    int sum=0;
    for(int i=0;i<bags;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    
    int rem=sum%Nokids;
    cout<<" "<<rem;
        
}
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        cout<<"Case #"<<T<<":";
        test();
        
    }
}