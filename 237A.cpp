#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n,h,m,h0,m0,cnt=1,cash=1;
	cin >> n >> h0 >> m0;
	while(--n)
	{
		cin >> h >> m;
		if(h == h0 and m == m0)
		{
			cnt++;
			if(cnt>cash)
				cash = cnt;
		}
		else
			cnt = 1;
		h0 = h;
		m0 = m;
	}
	cout << cash;
	return 0;
}