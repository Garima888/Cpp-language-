#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a<<"greater"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<"greater"<<endl;
    }
    else{
    cout<<c<<"greater"<<endl;
    }
    return 0;
}