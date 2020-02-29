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

	int a=1;
	for(int i=0;i<n-1;i++)
	{
		if(v[i]!=v[i+1] and v[i]!=0)
		{
			a++;
		}
	}
	cout << a << endl;
	return 0;
}
  