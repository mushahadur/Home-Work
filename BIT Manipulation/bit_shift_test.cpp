#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num = 9,i=3;
    for(i=3; i>=0; --i)
    {

        cout<<((num>>i)&1);
    }
    cout<<endl;
    for(i=3; i>=0; --i)
    {

        cout<<(num>>i);
    }
    cout<<endl;
    i=3;
    cout<<"Shift :" <<(num>>i);
    cout<<endl;
    cout<<"and : " <<((num>>i)&1);
    cout<<endl;

    --i;
    cout<<"Shift :" <<(num>>i);
    cout<<endl;
    cout<<"and : " <<((num>>i)&1);
    cout<<endl;

    --i;
    cout<<"Shift :" <<(num>>i);
    cout<<endl;
    cout<<"and : " <<((num>>i)&1);
    cout<<endl;

    --i;
    cout<<"Shift :" <<(num>>i);
    cout<<endl;
    cout<<"and : " <<((num>>i)&1);
    cout<<endl;
    int a=5,b=4;
    cout<<(a&b)<<endl;
    cout<<((a&b)<<1)<<endl;
    cout<<"and :" <<(9&8)<<endl;




    return 0;
}
