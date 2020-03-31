#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI

	int t;
	cin >> t;

	while(t--)
	{
		long long int a,b,cnt=0,k=0;
		cin >> a >> b;

		cnt = abs(a-b);
		k = cnt/5;
		cnt%=5;
		k+=cnt/2;
		cnt%=2;
		k+=cnt;
		cout << k << endl;
	}
	return 0; 
}