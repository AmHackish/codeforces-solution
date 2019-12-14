#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int j=0; j<t; j++)
	{
		int x;
		cin >> x;
		if(x%2 == 0)
			cout << x/2 << endl;
		else if(x%3 == 0)
			cout << x/3<< endl;
		else if(x%4 == 0)
			cout << x/4<< endl;
		else if(x%5 == 0)
			cout << x/5<< endl;
		else if(x%6 == 0)
			cout << x/6<< endl;
		else if(x%7 == 0)
			cout << x/7<< endl;
		else
		{
			if(x%2!=1)
			{
				int k=0;
				k = x%2;
				cout << (x-k)/2+1<< endl;
			}
			else if(x%3!=1)
			{
				int k=0;
				k = x%3;
				cout << (x-k)/3+1<< endl;	
			}
			else if(x%4!=1)
			{
				int k=0;
				k = x%4;
				cout << (x-k)/4+1<< endl;	
			}
			else if(x%5!=1)
			{
				int k=0;
				k = x%5;
				cout <<(x-k)/5+1<< endl;	
			}
			else if(x%6!=1)
			{
				int k=0;
				k = x%6;
				cout << (x-k)/6+1<< endl;	
			}
			else if(x%7!=1)
			{
				int k=0;
				k = x%7;
				cout <<(x-k)/7+1<< endl;	
			}
		}
	}
	return 0;
} 