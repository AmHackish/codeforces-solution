#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast
	int n,a;
	cin >> n >> a;

	vector<string> paswd(n);
	vector<int> pwdlen(n);
	
	for(int i=0;i<n;i++)
	{
		cin >> paswd[i];
		pwdlen[i] = paswd[i].length();
	}

	string s;
	cin >> s;
	sort(pwdlen.begin(),pwdlen.end());

	int cnt1=0,cnt2=0,cnt3=0,len=s.length(),cnt=0;
	for(int i=0;i<n;i++)
	{
		if(len == pwdlen[i])
			cnt2++;
		else if(len > pwdlen[i])
			cnt1++;
		else if(len < pwdlen[i])
			cnt3++;
	}

	for(int i=0;i<n;i++)
		if(paswd[i] == s)
			cnt++;
	
	int mini=0,maxi=0;
	mini = cnt1 + (cnt1/a)*5+1;
	if(cnt2 == cnt)
		maxi = cnt1 + (cnt1/a)*5 + 1;
	else
		maxi = cnt1  + cnt2 + ((cnt2-cnt+cnt1)/a)*5;

	cout << mini << " " << maxi << endl;

	return 0;
}
  