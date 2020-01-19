#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	int x,y;
	x = v[n-1];
	vector<int>b;
	for(int i=2;i<n-1;i++)
	{
		if(v[i]==v[i+1])
		{
			i++;
			y = v[i];
		}
		else if(x%v[i]!=0)
			y = v[i];
	}
	cout << x<< " " << y << endl;
	return 0;
}
  