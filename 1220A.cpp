#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int m;
	cin >> m;

	string s;
	cin >> s;

	int e=0,n=0;
	for(int i=0;i<m;i++)
	{
		if(s[i] == 'e')
			e++;
		if(s[i] == 'n')
			n++;
	}
	for(int i=0;i<n;i++)
		cout << 1 << " ";
	for(int i=0;i<e-n;i++)
		cout << 0 << " ";
	cout << endl;
	return 0;
}
  