#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<n<<"��2~99���]�ơG";
		for(int i=2;i<=99;i++)
		{
			if(n%i == 0)
				cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
