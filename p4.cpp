#include <bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	int Bucket_sort[101] = {0};
	for(int i=0;i<10;i++)
		Bucket_sort[rand()%100+1]++;
	for(int i=1;i<=100;i++)
		if(Bucket_sort[i]--) cout<<i<<" ";
	cout<<"\n"; 
	return 0;
}
