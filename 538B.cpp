#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	lli N;
  	cin >> N;

  	vector<lli> v;
 
  	while(N)
  	{
  		lli n=N ,m=0, p=1;
  		while(n)
  		{
  			if(n%10)
  			{
  				m+=p;
  			}
  			n/=10;
  			p*=10;
  		}
  		v.push_back(m);
  		N-=m;
  	}
  	cout << v.size() << endl;
  	sort(v.begin(),v.end());
  	for(auto x:v)
  		cout << x << " ";
  	cout << endl;
	return 0;
}