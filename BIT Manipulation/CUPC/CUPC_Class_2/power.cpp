#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    if((n&(n-1))==0)
    {
        cout<<"Power of number "<<endl;
    }
    else
    {
        cout<<"Non Power of number"<<endl;
    }
    }
    return 0;
}
