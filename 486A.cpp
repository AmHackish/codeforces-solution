#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	sort(v.begin(),v.end());
	long long int sum1=0,sum2=0;
	for(int i=n/2;i<n;i++)
		sum1+=v[i];
	for(int j=0;j<n/2;j++)
		sum2+=v[j];
	long long int k  = pow(sum1,2)+pow(sum2,2);
	cout << k << endl;
	return 0;
}