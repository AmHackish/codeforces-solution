#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI

	long long int n,score=0;
	cin >> n;

	vector<long long int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		score+=v[i];
	}
	sort(v.begin(),v.end());

	for(long long int i=0;i<n-1;i++)
		score+=(i+1)*v[i];
	score += (n-1)*v[n-1];

	cout << score << endl;
	return 0; 
}