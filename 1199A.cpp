#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n,x,y;
	cin >> n >> x >> y;
	
	vector<int>a(n);
	
	for(int i=0;i<n;i++)
		cin >> a[i];

	for(int i=0;i<n;i++)
	{
		bool valid=true;
		int xi=x,yi=y;
		for(int j=i+1;j<n and valid and yi>0;j++,yi--)
			if(a[j]<=a[i])
				valid=false;
		for(int j=i-1;j>=0 and valid and xi>0;j--,xi--)
			if(a[j]<=a[i])
				valid=false;
		if(valid)
		{
			cout << i+1 << endl;
			return 0;
		}
	}
	return 0;
}
  