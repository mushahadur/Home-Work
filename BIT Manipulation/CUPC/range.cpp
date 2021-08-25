#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,c;
    cin>>n>>m;
    n--;
    if((n%4) ==1)
    {
       a=1;
    }
    else if(n%4 == 2)
    {
        a=n+1;
    }
    else if(n%4== 3)
    {
       a=0;
    }
    else
    {
        a=n;
    }
 cout<<"Lower case(n) :"<<(n+1)<<"  "<<a<<endl;

    if((m%4) ==1)
    {
       b=1;

    }
    else if(m%4 == 2)
    {
        b=m+1;
    }
    else if(m%4== 3)
    {
       b=0;
    }
    else
    {
        b=m;
    }
    cout<<"Uper Case(m) :"<<m<<"  "<<b<<endl;
    c = a^b;
    cout<<c<<endl;

    return 0;
}
