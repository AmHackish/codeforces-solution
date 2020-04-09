#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,chips;
	cin >> n >> chips;

	int sum=0;
	sum = (n*(n+1))/2;
	chips = chips%sum;

	for(int i=1;i<=n;i++)
	{
		if(i<=chips)
			chips-=i;
		else
			break;
	}
	cout << chips << endl;
	return 0;
}
  