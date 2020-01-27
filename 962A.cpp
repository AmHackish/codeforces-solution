#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n,k=0;
	cin >> n;

	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		k+=a[i];
	}

	int ans=0;
	if(k%2 == 0)
	{
	for(int i=0;i<n;i++)
	{
		ans+=a[i];
		if(ans>=k/2)
		{
			cout << i+1 << endl;
			return 0;
		}
	}
	}
	else
	{
		for(int i=0;i<n;i++)
	{
		ans+=a[i];
		if(ans>k/2)
		{
			cout << i+1 << endl;
			return 0;
		}
	}
		
	}



	return 0;
}
  