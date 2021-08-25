#include<bits/stdc++.h>
using namespace std;
int main()
{
    /**
        int a=0;
        int n;
        int arr[n+5];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int j=0; j<n; j++)
        {
            a = a^arr[j];
        }
        cout<<a;
    */


    int n,x,ans=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>x;
    cout<<(ans^x);
}
