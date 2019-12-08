#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		int n,x,a,b;
		cin >> n >> x >> a >> b;
		if((n-a)==0 and (b-x)>0)
			b = b-x;
		else if((n-a)==0 and (b-x)<=0)
			b = 1;
		else if((n-b)==0 and (a-x)>0)
			a = a-x;
		else if((n-b)==0 and (a-x)<=0)
			a = 1;
		else if((n-a) > (n-b))
		{
			if(b+x <= n)
				b = b+x;
			else
			{
				x = x-(n-b);
				b = n;
				if((a-x)>0)
					a = a-x;
				else
					a = 1;
			}
		}
		else
		{
			if(a+x <= n)
				a = a+x;
			else
			{
				x = x-(n-a);
				a = n;
				if((b-x)>0)
					b = b-x;
				else
					b = 1;
			}
		}
		cout << abs(b-a) << endl;
	}
	return 0;
}