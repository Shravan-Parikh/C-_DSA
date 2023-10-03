#include<iostream>
using namespace std;

string XinLast(string s){
    if(s.length()==0){
        return "";
    }
    if(s[0]=='x'){
        return XinLast(s.substr(1))+'x';
    }
    else{
        cout<<s[0];
        return XinLast(s.substr(1));
    }
}


int main(){
    string s;
    cin>>s;
    cout<<XinLast(s);

	return 0;
}