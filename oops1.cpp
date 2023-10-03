#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int gender;

    void printinfo(){
        cout<<"name : " + name + " age : "<<age<<endl;
        
    }
};
int main(){
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */cout<<"name"<<endl;
        cin>>arr[i].name;
        /* code */cout<<"age"<<endl;
        cin>>arr[i].age;

    }
    for (int i = 0; i < 3; i++)
    {
        /* code */arr[i].printinfo();
    }
    
    return 0;
}
