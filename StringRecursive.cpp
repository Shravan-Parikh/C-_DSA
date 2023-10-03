#include<iostream>
using namespace std;

void Reverse(string s){
    if(s.length()==0){//base case
        return;
    }

    string ros=s.substr(1);
    Reverse(ros);
     cout<<s[0];

//hravan
//ravan
//avan
//van
//an
//n


}


int main(){

    string s;
    cin>>s;
    Reverse(s);


	return 0;
}