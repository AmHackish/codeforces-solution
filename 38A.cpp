#include <bits/stdc++.h>

using namespace std;
int main()
{
	int q;
	cin >> q;
	for(int i=0; i<q; i++)
	{
		vector<long long int> v(3);
		cin >> v[0] >> v[1] >> v[2];
		sort(v.begin(), v.end());
		if(v[0]== v[1] and v[1] == v[2])
			cout << 0;
		else if(v[0] == v[1] and v[2]-v[1] == 1)
		{
			v[2]--;
			cout << abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]) << endl;
		}
		else if(v[0] == v[1] and v[2]-v[1] > 1)
		{
			v[2]--,v[0]++,v[1]++;
			cout << abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]) << endl;
		}
		else if(v[1] == v[2] and v[1]-v[0] == 1)
		{
			v[0]++;
			cout << abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]) << endl;
		}
		else if(v[1] == v[2] and v[1]-v[0] > 1)
		{
			v[0]++,v[1]--,v[2]--;
			cout << abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]) << endl;
		}
		else if(v[1]-v[0] == 1)
		{
			v[0]++,v[2]--;
			cout << abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]) << endl;
		}
		else if(v[2]-v[1] == 1)
		{
			v[2]--,v[0]++;
			cout << abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]) << endl;
		}
		else
		{
			v[0]++,v[1]--,v[2]--;
			cout << abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]) << endl;
		}
	}
	return 0;
} 