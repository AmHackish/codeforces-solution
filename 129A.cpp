#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	int n,sum=0;
  	cin >> n;

  	vector<int> a(n);
  	for(int i=0;i<n;i++)
  	{
  		cin >> a[i];
  		sum+=a[i];
  	}
  	int way=0;
  	for(int i=0;i<n;i++)
  	{
  		int k = sum;
  		k -= a[i];
  		if(k%2 == 0)
  			way++;
  	}
  	cout << way << endl;
  	return 0;
}