#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x, y, z;
    char cal;
    cout<<"Enter the integers: ";
    cin>>x>>y;
    cin>>cal;
    switch (cal)
    {
        case '+':
        cout<<x<<"+"<<y<<"="<<x+y<<endl;
        break;

        case '-':
        cout<<x<<"-"<<y<<"="<<x-y<<endl;
        break;

        case '*':
        cout<<x<<"*"<<y<<"="<<x*y<<endl;
        break;

        case '/':
        cout<<x<<"/"<<y<<"="<<x/y<<endl;
        break;

        default:
        cout<<"Error! in the operation";

    }
    return 0;
}
