#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int p=0,x=0;
	while(p<n)
	{
		p = p+5*pow(2,x);
		x++;
	}
	if(p == n)
	{
		cout << "Howard" << endl;
		return 0;
	}
	else
	{
		x--;
		p = p-5*pow(2,x);
		p = p+pow(2,x);
		if(n<=p)
		{
			cout << "Sheldon" << endl;
			return 0;
		}
		else
			p = p+pow(2,x);
		if(n<=p)
		{
			cout << "Leonard" << endl;
			return 0;
		}
		else
			p = p+pow(2,x);
		if(n<=p)
		{
			cout << "Penny" << endl;
			return 0;
		}
		else
			p = p+pow(2,x);
		if(n<=p)
		{
			cout << "Rajesh" << endl;
			return 0;
		}
		else
			cout << "Howard" << endl;
	}
	return 0;
}
  