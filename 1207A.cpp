#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		int b,f,p,h,c,cost=0;
		cin >> b >> p >> f >> h >> c;
		if(c>h)
		{
			if(b >= f*2)
			{
				cost = c*f;
				b = b-(f*2);
				if(b >= p*2)
					cost+= h*p;
				else
					cost+=(b/2)*h;
			}
			else
			{
				if(f>=(b/2))
					cost = (b/2)*c;
				else
				{
					cost = c*f;
					b = b-(f*2);
					if(b >= p*2)
						cost+= p*h;
					else if(p >= (b/2))
						cost += (b/2)*h;

				}
			}
		}
		else
		{
			if(b >= p*2)
			{
				cost = h*p;
				b = b-(p*2);
				if(b >= f*2)
					cost+= c*f;
				else
					cost+=(b/2)*c;
			}
			else
			{
				if(p>=(b/2))
					cost = (b/2)*h;
				else
				{
					cout << cost << endl;
					cost = p*h;
					b = b-(p*2);
					if(b >= f*2)
						cost+= f*c;
					else if(f >= (b/2))
						cost += (b/2)*c;	
				}
			}
		}
		cout << cost << endl;
	}
	return 0;
} 