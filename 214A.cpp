#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	if(n<m)
	{
		int k=0;
		for(int i=1;i<=sqrt(m);i++)
			for(int j=0;j<=i;j++)
				if(i+(j*j) == n and (i*i)+j == m)
					k++;
		cout << k << endl;
	}
	else if(n>=m)
	{
		int k=0;
		if(n == 1 and m==1)
			k++;
		for(int i=1;i<=sqrt(n);i++)
			for(int j=0;j<=i;j++)
				if(i+(j*j) == m and (i*i)+j == n)
					k++;
		cout << k << endl;
	}
	return 0;
} 