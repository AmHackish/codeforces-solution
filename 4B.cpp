#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int cnt=0,n;
		string a,b,c;
		cin >> a >> b >> c;
		n = a.length();
		
		for(int i=0;i<a.length();i++)
		{
			if(a[i] != b[i])
			{
				if(a[i] == c[i])
				{
					swap(b[i],c[i]);
					n--;
				}
				else if(b[i] == c[i])
				{
					swap(a[i],c[i]);
					n--;
				}
				else
				{
					cnt++;
					break;
				}
			}
			cout << n << " ";
		}
		if(cnt or n!=0)
			cout << "NO" << endl;
		else 
		{
			if(a == b)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
