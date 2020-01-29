#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,k=0;
	cin >> n;

	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		if(v[i]<0)
			k++;
	}

	sort(v.begin(),v.end());

	set<int>a,b,c;

	if(k%2 == 0)
	{
		a.insert(v[0]);
		c.insert(v[1]);
		for(int i=2;i<n;i++)
		{
			if(v[i] == 0)
				c.insert(v[i]);
			else
				b.insert(v[i]);
		}
	}
	else
	{
		a.insert(v[0]);
		for(int i=1;i<n;i++)
		{
			if(v[i] == 0)
				c.insert(v[i]);
			else
				b.insert(v[i]);
		}
	
	}
	
	cout << a.size() << " ";
	for(int x:a)
		cout << x << " ";
	cout << endl << b.size() << " ";
	for(int x:b)
		cout << x << " ";
	cout << endl << c.size() << " ";
	for(int x:c)
		cout << x << " ";
	cout << endl;
	return 0;
}
  