#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		long long int n,a,b,x=0,k;
		cin >> n >> a >> b;
		x=0;
		if(n%2)
			x=a,n--;
		k = n/2;
		x+=min(a*2,b)*k;
		cout << x << endl;
	}
	return 0;
}
