#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,sum=0;
	cin >> n;
	vector<int> seats(n);
	for(int i=0;i<n;i++)
	{
		cin >> seats[i];
		sum+=seats[i];
	}
	if(seats[0] > sum/2)
		cout << 1 << endl << 1 << endl;
	else
	{
		int par=seats[0];
		vector<int> v;
		v.push_back(1);
		for(int i=1;i<n;i++)
		{
			if(seats[i]*2 > seats[0])
				continue;
			else
			{
				par+=seats[i];
				v.push_back(i+1);
				if(par > sum/2)
					break;
			}
		}
		if(par > sum/2)
		{
			cout << v.size() << endl;
			for(int i=0;i<v.size();i++)
				cout << v[i] << " ";
			cout << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}  