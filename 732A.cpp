#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int cnt=1;
	if(a%10 == 0)
		cout << 1 << endl;
	else
	{
		int n = a%10,i=2;
		int k = a;
		if(n == 0)
			cout << 1 << endl;
		else
		{
			int i=2;
			while(n!=0 and n != b)
			{
				a = k*i;
				n = a%10;
				cnt++;
				i++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

