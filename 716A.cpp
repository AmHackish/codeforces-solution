#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n,c;
	cin >> n >> c;
	vector<int> time(n);
	for(int i=0; i<n; i++)
		cin >> time[i];
	int words = 1;;
	for(int i=0; i<n-1; i++)
	{
		if((time[i+1]-time[i]) <= c)
			words ++;
		else 
			words = 1;
	}
	cout << words << endl;
	return 0;
}