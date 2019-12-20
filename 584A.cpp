#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin >> n >> t;
	if(n==1 and t == 10)
		cout << -1 << endl;
	else
	{
		if(n == 1)
			cout << t << endl;
		else if(t == 10 and n!=2)
		{
			cout << t;
			for(int i=0;i<n-2;i++)
				cout << 0 ;
			cout << endl;
		}
		else if(n == 2 and t == 10)
			cout << 10 << endl;
		else
		{
			cout << t;
			for(int i=0;i<n-1;i++)
				cout << 0 ;
			cout << endl;
		}
	}
	return 0;
}  