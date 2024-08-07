//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"enter string: ";
    cin>>a;
    int i;
    for(i=a.length()-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}