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

	int a=1,b=0,c=1;
	for(int i=0;i<n-1;i++)
	{
		if(v[i]!=v[i+1] and v[i]!=0)
		{
			a++;
		}
		if(v[i]==v[0])
			b++;
		if(v[i]==v[n-1])
			c++;
	}
	if(a == 2)
	{
		if(b==c)
			cout << "YES" << endl << v[0] << " " << v[n-1] << endl;
		else
			cout << "NO" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}
  