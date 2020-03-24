#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,sum=0,pro=1;
		cin >> n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin >> v[i];
		
		int step=0;
		for(int i=0;i<n;i++)
		{
			if(v[i] == 0)
			{
				step++;
				v[i]=1;
			}
			sum+=v[i];
		}
		if(sum == 0)
			step++;
		cout << step << endl;

	}
	return 0;
}
