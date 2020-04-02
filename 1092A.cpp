#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	int t;
	cin >> t;

	while(t--)
	{
		int n,k,q;
		cin >> n >> k;

		string s="";
		q = n/k;
		for(int j=0;j<q;j++)
			for(int i=97;i<97+k;i++)
				s+=(char)i;
		if(s.length()!=n)
		{
			int l = n-s.length();
			for(int i=97;i<97+l;i++)
				s+=(char)i;

		}
		cout << s << endl;
	}
	return 0; 
}