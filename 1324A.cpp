#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;

		vector<int>v(n);
		for(int i=0;i<n;i++)
			cin >> v[i];

		sort(v.begin(),v.end());
		int k=0;
		for(int i=0;i<n;i++)
		{
			if((v[n-1]-v[i])%2!=0)
			{
				k++;
				break;
			}
		}
		if(k)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
