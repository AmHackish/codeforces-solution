#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,l,r,m;
	cin >> n >> l >> r;
	m = n;
	int sum1 = n-l+1,i=1;
	l=l-1;
	while(l!=0)
	{
		sum1+=pow(2,i);
		l--;
		i++;
	}
	int sum2=1,j=1;
	m = m-1;
	r = r-1;
	while(r!=0)
	{
		sum2+=pow(2,j);
		j++;m--;r--;
	}
	if(m!=0)
		sum2+=m*pow(2,j-1);
	cout << sum1 << " " << sum2 << endl;
	return 0;
}
  