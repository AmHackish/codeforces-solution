#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	for(int i=0; i<q;i++)
	{
		long long int a,b,n,s;
		cin >> a >> b >> n >> s;
		if(s<n and b>=s)
			cout << "YES" << endl;
		else if(s<n and b<s)
			cout << "NO" << endl;
		else
		{
			int k=s/n;
			if(k<=a)
				s = s-k*n;
			else
				s = s-a*n;
			if(b>=s)
				cout << "YES" << endl;
			else if(b<s)
				cout << "NO" << endl;
		}
	}
	return 0;
} 