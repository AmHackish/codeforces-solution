#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,a,b;
	cin >> n >> a >> b;
	if(b<0)
	{
		while(b!=0)
		{
			if(a != 1)
			{
				a--;
				b++;
			}
			else
			{
				a = n;
				b++;
			}
		}
	}
	else if(b>0)
	{
		while(b!=0)
		{
			if(a != n)
			{
				a++;
				b--;
			}
			else
			{
				a = 1;
				b--;
			}
		}
	}
	cout << a << endl;
	return 0;
}  