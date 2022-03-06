#include <bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	int record[10]={0},num;
	for(int i=0;i<4;i++)
	{
		num = rand()%10;
		while(record[num])
			num = rand()%10;
		record[num]++;
		cout<<num<<"\n";
	}
	return 0;
}
