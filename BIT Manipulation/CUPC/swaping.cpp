#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Normal Swoaping "<<endl;
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Number1 = :"<<num1<<endl<<"Number2 = :"<<num2<<endl;
    num1 = num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"After Swoap "<<endl;
    cout<<"Number1 = :"<<num1<<endl<<"Number2 = :"<<num2<<endl;
    cout<<"Bitwaish Swoaping "<<endl;

    int a,b;
    cin>>a>>b;
    cout<<"Number1 = :"<<a<<endl<<"Number2 = :"<<b<<endl;

    a=(a^b);
    b=(a^b);
    a=(a^b);
    cout<<"After Swoap "<<endl;
    cout<<"Number1 = :"<<a<<endl<<"Number2 = :"<<b<<endl;

    return 0;
}
