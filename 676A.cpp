#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	vector<int>b(n);
	b=v;
	sort(b.begin(),b.end());

	int k=0,l=0;
	k = find(v.begin(),v.end(),b[0])-v.begin()+1;
	l = find(v.begin(),v.end(),b[n-1])-v.begin()+1;
	if(abs(k-l) == n-1)
		cout << n-1 << endl;
	else
		cout << max(abs(n-k),max(abs(n-l),max(l-1,k-1))) << endl;
	return 0;

}
  