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

		vector<int> v(n),ai(n);
		for(int i=0;i<n;i++)
			cin >> v[i];
		ai = v;

		if(n==1)
			cout << v[0] << endl;
		else
		{
			sort(v.begin(),v.end(),greater<int> ());
			int a=0,b=0,c=0;
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					if(i!=j and (i-v[i])==(j-v[j]))
					{
						a++;
						break;
					}
			if(a)
			{
				sort(v.begin(),v.end());
				for(int i=0;i<n;i++)
					for(int j=0;j<n;j++)
						if(i!=j and (i-v[i])==(j-v[j]))
						{
							b++;
							break;
						}
				if(b)
					for(auto x:ai)
						cout << x  << " ";
				else
					for(auto x:v)
						cout << x << " ";
			}
			else
				for(auto x:v)
					cout << x << " ";
		}
	}
	return 0;
}
