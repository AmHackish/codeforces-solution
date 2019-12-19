#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	cin >> k;
	std::vector<int> v(12);
	for(int i=0;i<12;i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	int month =0,j=11;
	while(k!=0 and k>0 and j>=0)
	{
		k = k-v[j];
		j--;
		month++;
	}
	if(k==0 or k<0)
		cout << month << endl;
	else
		cout << -1;
	return 0;
} 