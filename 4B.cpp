#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast
	int n,o;
	cin >> n >> o;
	vector<string> s(n);
	for(int i=0;i<n;i++)
		cin >> s[i];
	sort(s.begin(),s.end());
	int cnt=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			string t = "";
			for(int k=0;k<o;k++)
			{
				if(s[i][k] == s[j][k])
					t.push_back(s[i][k]);
				else
				{
					if(s[i][k]!='S' and s[j][k]!='S')
						t.push_back('S');
					else if(s[i][k]!='E' and s[j][k]!='E')
						t.push_back('E');
					else if(s[i][k]!='T' and s[j][k]!='T')
						t.push_back('T');
				}
			}
			int ki = -1;
			if(binary_search(s.begin(), s.end(), t))
			ki = lower_bound(s.begin(),s.end(), t)-s.begin();
			if(ki != -1 and ki > i and ki > j)
				cnt++;
		}
	cout << cnt << endl;
	return 0;
}
  