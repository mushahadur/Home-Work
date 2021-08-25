#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int fact = 1,i;
    int m=47;
    cin>>n;
    for(i=2; i<=n; i++)
    {
         fact=((fact%m)*(i%m))%m;  /// (a*b)%m=((a%m)*(b%m))%m/(a+b)%m=((a%m)+(b%m))%m     fact = (fact*i)%m;
    }
    cout<<fact<<endl;

    return 0;
}
/**

    int fact=1;
	for(int i=1;i<=100;i++)
	{
		fact=((fact%97)*(i%97))%97;

	}
	printf("%d\n",fact);

*/
