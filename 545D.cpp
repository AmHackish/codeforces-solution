#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast;

	int n;
	cin >> n;

	vector<lli> t(n);
	for(int i=0;i<n;i++)
		cin >> t[i];

	sort(t.begin(),t.end());

	lli time=0,i=0,peop=0;
	while(i<n)
	{
		if(time <= t[i])
		{
			peop++;
			time += t[i];
		}
		i++;
	}
	cout << peop << endl;
	return 0;  
}