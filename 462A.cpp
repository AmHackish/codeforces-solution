#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	cin >> n;

	for(int i=0;i<n;i++)
	{
		vector<int>v(3);
		cin >> v[0] >> v[1] >> v[2];

		sort(v.begin(),v.end());
		if(v[0] == v[2])
			cout << v[0] + v[0]/2 << endl;
		else if(v[1] == v[2])
		{
			if(v[0]%2!=0)
				v[0]--;
			int d = v[0];
			v[1]-=v[0]/2;
			v[2]-=v[0]/2;
			cout << d+v[1] << endl;
		}
		else if(v[0] == v[1])
		{
			if(v[2]%2!=0)
				v[2]--;
			int d = v[2];
			if(v[2]/2 <= v[0])
			{
				v[1]-=v[2]/2;
				v[0]-=v[2]/2;
				cout << d+v[0] << endl;
			}
			else
				cout << v[0]*2 << endl;
		}
		else
		{
			int d =v[0]+v[1]-v[0]/2;
			int l = v[0]+min((v[2]-v[0]),v[1]);
			cout << max(d,l) << endl;
		}
		
	}
	return 0;
}