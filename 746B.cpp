#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	deque<char> a;
	if(n%2 == 0)
	{
		for(int i=0;i<n;i++)
		{ 
			if(i%2 == 0)
				a.push_front(s[i]);
			else
				a.push_back(s[i]);
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(i%2 == 0)
				a.push_back(s[i]);
			else
				a.push_front(s[i]);
		}
	}
	for(int i=0;i<a.size();i++)
		cout << a[i];
	cout << endl;
	return 0;
}
