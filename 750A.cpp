#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int min = 240-b;
	int cnt=0,i=1,k=0;
	while(cnt<min and i<=a)
	{
		cnt+=5*i;
		i++;
		k++;
	}
	if(cnt <= min)
		cout << k << endl;
	else
		cout << k-1 << endl;
	return 0;
}

