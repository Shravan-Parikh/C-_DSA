#include <iostream>
using namespace std;

int main()
{
    int a;
    int i;
    cin>>a;
    for (i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            cout << a << " is not a prime number" << endl;
            break;
        }
    }
    if(i==a){

    cout << a << " is a prime number" << endl;
    }

    return 0;
}