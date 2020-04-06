#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	lli n,m,cnt=0;
  	cin >> n >> m;

  	lli n1,n2,n3,n4,n5;
  	n1 = (n+4)/5;
  	n2 = (n+3)/5;
  	n3 = (n+2)/5;
  	n4 = (n+1)/5;
  	n5 = n/5;

  	lli m1,m2,m3,m4,m5;
  	m1 = (m+1)/5;
  	m2 = (m+2)/5;
  	m3 = (m+3)/5;
  	m4 = (m+4)/5;
  	m5 = m/5;

  	cout << n1*m1 + n2*m2 + n3*m3 + n4*m4 + n5*m5 << endl;
  	return 0;
}