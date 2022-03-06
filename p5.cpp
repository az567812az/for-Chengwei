#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<n<<"的2~99的因數：";
		for(int i=2;i<=99;i++)
		{
			if(n%i == 0)
				cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
