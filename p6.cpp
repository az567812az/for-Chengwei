#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
	if(b == 0) return a;
	return GCD(b,a%b);
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		cout<<" "<<a<<" 和 "<<b<<" 的最大公因數: ";
		if(b>a) swap(a,b);
			cout<<GCD(a,b)<<"\n";
	}
	return 0;
}
