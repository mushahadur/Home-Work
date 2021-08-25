#include<bits/stdc++.h>
using namespace std;

void binary_print(int num)
{
    for(int i=10; i>=0; --i)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    binary_print(9);
    int a=11;
    int i=1;

    if((a & ((1<<i))) != 0)
    {
        cout<<"set of bit"<<endl;
    }
    else

    {
        cout<<"Not set of bit"<<endl;
    }
    /// bit set
    cout<<"Set bit :";
    binary_print(a | (1<<1));

    /// bit unset
    cout<<"Unset bit :";
    binary_print(a & (~(1<<3)));

    /// toggole
    cout<<"Toggol :";
    binary_print(a ^ (1<<3));

    /// Count bits
    int cheack = 0;

    for(int i=31; i>=0; --i)
    {
        if((a & ((1<<i))) != 0)
    {
        cheack++;
    }

    }
    cout<<"Count bits : "<<cheack<<endl;

    return 0;
}
