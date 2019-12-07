#include <bits/stdc++.h>
 
using namespace std;

int main()
{
	int a1,a2,a3,b1,b2,b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	int n;
	cin >> n;
	int i,j;
	i = a1+a2+a3;
	j = b1+b2+b3;
	int cnt=0;
	if(i<=5 and i>0)
		cnt++;
	if(j>0 and j<=10)
		cnt++;
	if(i>5)
	{
		if(i%5 == 0)
			cnt += i/5;
		else
			cnt += i/5 + 1;
	}
	if(j>10)
	{
		if(j%10 == 0)
			cnt += j/10;
		else
			cnt += j/10 + 1;
	}
	if(cnt<=n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl; 

	return 0;
}