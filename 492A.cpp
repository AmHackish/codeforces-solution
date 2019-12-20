#include <bits/stdc++.h>
using namespace std;
long long int findsum(long long int x)
{
	long long int sum=0;
	for(long long int i=1;i<=x;i++)
		sum+=i;
	return sum;
}
int main()
{
	int n;
	cin >> n;
	long long int height=0,cnt=0,m=0,i=1;
	while(m<=n)
	{
		cnt = findsum(i);
		m +=cnt;
		height++; 
		i++;
	}
	if(m<=n)
		cout << height << endl;
	else
		cout << height-1 << endl;
	return 0;
}  