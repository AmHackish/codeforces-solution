#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fast;
	lli n,x=0,y=0;
	cin >> n;

	vector<lli> a(n),v(n);
	for(lli i=0;i<n;i++)
		cin >> a[i];

	v = a;
	sort(v.begin(),v.end());

	for(lli i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			x = i;
			break;
		}
	}
	for(lli i=n-1;i>0;i--)
	{
		if(a[i]<a[i-1])
		{
			y = i;
			break;
		}
	}
	partial_sort(a.begin()+x,a.begin()+y,a.end());
	if(a == v)
		cout << "yes" << endl << x+1 << " " << y+1 << endl;
	else
		cout << "no" << endl; 
	return 0;
}