#include<iostream>
using namespace std; 
class baseclass{
    public:
     void print(){
        cout<<"this is print function in base class"<<endl;;
    }
     void display(){
        cout<<"this is display function in base class"<<endl;
    }
};
class derived : public baseclass{
    public:
    void print(){
        cout<<"this is print function of derived class"<<endl;;

    }
    void display(){
        cout<<"this is display function of derived class"<<endl;
    }
    
};
int main(){
    baseclass *base;
    derived d;
    base=&d;
    base -> print();
    base -> display();

    return 0;
}
