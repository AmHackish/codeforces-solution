#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int>a(n);
	map<int,int>s;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		s[a[i]]++;
	}

	cout << s.size() << endl;
	for(int k=0;k<n;k++)
	{
		if(s[a[k]] == 1)
			cout << a[k] << " ";
		else
			s[a[k]]--;
	}
	return 0;
}
