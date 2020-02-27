#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	sort(v.begin(),v.end());

	int k=0;
	for(int i=0;i<n-2;i++)
	{
		if(v[i] == v[i+1] and v[i] == v[i+2])
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	vector<int>a,b;

	for(int i=0;i<n-1;i++)
	{
		if(v[i]==v[i+1])
		{
			a.push_back(v[i]);
			i++;
		}
		b.push_back(v[i]);
	}
	if(v[n-1]!=v[n-2])
		b.push_back(v[n-1]);
	
	cout << "YES" << endl << a.size() << endl;
	for(int i=0;i<a.size();i++)
		cout << a[i] << " ";
	
	cout << endl << b.size() << endl;
	for(int i=b.size()-1;i>=0;i--)
		cout << b[i] << " ";

	if(v[n-1]!=v[n-2])
		b.push_back(v[n-1]);
	cout << endl;
	return 0;

}
  