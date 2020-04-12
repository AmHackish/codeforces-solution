#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fast;

	int n;
	cin >> n;

	vector<lli> v(n),a(n),b(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	a[0] = v[0];
	for(int i=1;i<n;i++)
		a[i] = a[i-1]+v[i];
	
	sort(v.begin(),v.end());

	b[0] = v[0];
	for(int i=1;i<n;i++)
		b[i] = b[i-1]+v[i];

	int m;
	cin >> m;

	while(m--)
	{
		int ty,l,r;
		cin >> ty >> l >> r;

		l--;
		r--;
		if(ty == 1)
		{
			if(l == 0)
				cout << a[r] << endl;
			else
				cout << a[r]-a[l-1] << endl;
		}
		else
		{
			if(l == 0)
				cout << b[r] << endl;
			else
				cout << b[r]-b[l-1] << endl;
		}
	}
	return 0;
}