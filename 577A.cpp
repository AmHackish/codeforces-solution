#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin >> n >> x;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(x%(i+1) == 0)
		{
			int j=x/(i+1);
			if(j<n+1)
				cnt++;
		}
	}
	cout << cnt << endl;
}