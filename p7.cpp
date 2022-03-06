#include <bits/stdc++.h>
using namespace std;
int main()
{
	int cnt = 100,ans = 0;
	while(cnt--)
	{
		cout<<"累加"<<cnt+1<<"\n";
		ans+=cnt+1;
	}
	cout<<"總共為:"<<ans<<"\n";
	return 0;
}
