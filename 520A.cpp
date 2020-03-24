#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,ans;
		cin >> n;
		if(n == 1)
		{
			cout << -1 << endl;
			continue;
		}
		else
		{
			cout << 8;
			n--;
			for(int i=0;i<n;i++)
				cout << 7;
			
		}
		cout << endl;
	}
	return 0;
}