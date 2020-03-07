#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);
	vector<int> b(n);

	for(int i=0;i<n;i++)
		cin >> v[i];
	b = v;	

	int sum=0;
	for(int i=0;i<n;i++)
	{
		v[i] = v[i]/2;
		sum += v[i];
	}
	
	if(sum !=0)
	{
		if(sum<0)
		{
			for(int i=0;i<n;i++)
			{
				if(b[i]%2!=0 and b[i]>0)
				{
					v[i]++;
					sum++;
				}
				if(sum == 0)
				{
					for(auto x : v)
						cout << x << endl;
					return 0;
				}
			}
		}
		else  
		{
			for(int i=0;i<n;i++)
			{
				if(b[i]%2!=0 and b[i]<0)
				{
					v[i]--;
					sum--;
				}
				if(sum == 0)
				{
					for(auto x : v)
						cout << x << endl;
					return 0;
				}
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
			cout << v[i] << endl;
	}
	return 0;
}
  