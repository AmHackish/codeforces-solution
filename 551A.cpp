#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	if(n == 1)
		cout << 1 << endl;
	else
	{
		vector<int> b(n);
		for(int i=0;i<n;i++)
		{
			int k=0;
			for(int j=0;j<n;j++)
			{
				if(a[i]<a[j])
					k++;
			}
			b[i] = k+1;
		}
		for(int i=0;i<n;i++)
			cout<< b[i] << " ";
		cout<< endl;
	}
	return 0;
}
  