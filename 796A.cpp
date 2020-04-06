#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	int n,m,k,dis;
  	cin >> n >> m >> k;

  	dis = n+1;
  	vector<int> a(n);
  	for(int i=0;i<n;i++)
  		cin >> a[i];

  	for(int i=0;i<n;i++)
  	{
  		if(a[i]!=0)
  		{
  			if(a[i]<=k)
  				dis = min(dis,abs(m-i-1));
  		}
  	}
  	cout << dis*10 << endl;
  	return 0;
}