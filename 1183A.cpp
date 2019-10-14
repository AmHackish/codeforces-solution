#include <bits/stdc++.h>
 
using namespace std;
int FindSum(int x)
{
	int sum =0;
	while(x!=0)
	{
		sum = sum + x%10;
		x = x/10; 
	}
	return sum;
}
int main()
{
	int n,s;
	cin >> n;
	s = FindSum(n);
	while((s%4) != 0)
	{
		n = n+1;
		s = FindSum(n);
	}
	cout << n << endl;
	return 0;
}