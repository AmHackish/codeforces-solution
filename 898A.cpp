#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	long long int n,k;
	cin >> n;

	k = n%10;
	if(k<=5)
		n-=k;
	else
	{
		k = 10-k;
		n+=k;
	}

	cout << n << endl;
	return 0; 
}