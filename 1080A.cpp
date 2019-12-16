#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,sheets=0;
	cin >> n >> k;
	if(2*n<=k)
		sheets++;
	else
	{
		int i=0;
		i=(2*n)/k;
		if(i*k <(2*n))
			sheets+= i+1;
		else
			sheets+=i;
	}
	if(5*n<=k)
		sheets++;
	else
	{
		int i=0;
		i=(5*n)/k;
		if(i*k <(5*n))
			sheets+= i+1;
		else
			sheets+=i;
	}
	if(8*n<=k)
		sheets++;
	else
	{
		int i=0;
		i=(8*n)/k;
		if(i*k <(8*n))
			sheets+= i+1;
		else
			sheets+=i;
	}
	cout <<sheets<<endl;
	return 0;
}  