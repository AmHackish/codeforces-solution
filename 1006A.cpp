#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	vector<long long int> v(t),a(t);
	for(int i=0;i<t;i++)
		cin >> v[i];

	a = v;
	sort(v.begin(),v.end());
		for(int i=0;i<t;i++)
		{
			if(a[i]%2 == 0)
				a[i]--;
		}
	for(int i=0;i<t;i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
