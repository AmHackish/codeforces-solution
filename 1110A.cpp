#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b,k,e=0,o=0;
	cin >> b >> k;

	vector<int>a(k);
	for(int i=0;i<k;i++)
		cin >> a[i];
	for(int i=0;i<k-1;i++)
	{
		if(a[i]%2 == 0)
			e++;
		else
			o++;
	}

	if(b%2 == 0)
	{
		if(a[k-1]%2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}
	else
	{
		if(o%2==0)
		{
			if(a[k-1]%2 == 0)
				cout << "even" << endl;
			else
				cout << "odd" << endl;
		}
		else
		{
			if(a[k-1]%2 == 0)
				cout << "odd" << endl;
			else
				cout << "even" << endl;
		}
	}
	return 0;
}