#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	sort(s.begin(),s.end());

	int i=1,ton=int(s[0]-'a')+1;
	k--;
	
	for(int i=0;i<n and k>0;i++)
	{
		for(int j=i+1;j<n and k>0;j++)
			if((s[j]-s[i])>1)
			{
				ton = ton + (s[j]-'a') + 1;
				k--;
				i = j-1;
				break;
			}
	}
	if(k == 0)
		cout << ton << endl;
	else
		cout << -1 << endl;
	return 0;
}
  