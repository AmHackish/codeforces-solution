#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI

	int n,a;
	cin >> n >> a;

	vector<int> city(n);
	for(int i=0;i<n;i++)
		cin >> city[i];
	a--;

	int cnt=0,i=a-1,j=a+1;
	if(city[a] == 1)
		cnt++;
	while(true)
	{
		if(i>=0 and j<n)
			if(city[i] == 1 and city[j] == 1)
				cnt+=2;
		if(i<0 and j<n)
			if(city[j] == 1)
				cnt++;
		if(i>=0 and j>=n)
			if(city[i] == 1)
				cnt++;
		if(i<0 and j>=n)
			break;
		i--;
		j++;
	}
	cout << cnt << endl;
	return 0; 
}