#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n,k,cnt=0,m=0;
	cin >> n >> k;

	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]>cnt)
		{
			cnt = a[i];
			m = i;
		}
	}
	
	while(a[m]>k)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]<=k)
				a[i] = 0;
			else
				a[i]-=k;
		}
	}
	for(int j=n-1;j>=0;j--)
		if(a[j]>0)
		{
			cout << j+1 << endl;
			break;
		}
	return 0;
}
  