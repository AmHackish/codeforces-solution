#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	int a,b,c,h=0,cnt=0;
	cin >> a >> b >> c;
	if(a>=x)
	{
		a = a-x;
		if((a+b) >= y)
		{
			h = a+b;
			h = h-y;
			if((h+c) >= z)
			{
				cnt = 1;
			}  
		}
		
	}
	if(cnt)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}  