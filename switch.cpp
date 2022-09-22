#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"Your agae is: ";
    cin>>age;
    switch (age)
    {
        case 1:
        cout<<"Your age is 18"<<endl;
        break;
        case 2:
        cout<<"Your age is 16"<<endl;
        break;
        default:
        cout<<"No special case"<<endl;
        break;
    }
    cout<<"Done"<<endl;
    return 0;
}