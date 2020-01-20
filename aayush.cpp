#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,s,k;
		cin >> n >> s >> k;
		vector <long long int> a(k);
		for(int i=0;i<k;i++)
			cin >> a[i];
		sort(a.begin(),a.end());
		int i=0,sol=0;
		while(i<k){
			if(a[i]<s)
				i++;
			else
				break;
		}
		if(a[i]==s)
		{
			int lsol=1,llvl=i-1;
			while(llvl>=0)
			{
				if(a[llvl]==(s-lsol))
					llvl--,lsol++;
				else
					break;
			}
			int usol=1,ulvl=i+1;
			while(ulvl<k)
			{
				if(a[ulvl]==(s+usol))
					ulvl++,usol++;
				else
					break;
			}
			if(s-lsol < 1)
				lsol = INT_MAX;
			if(s+usol > n)
				usol = INT_MAX;
			sol = min(lsol,usol);
			
		}
		cout << sol << endl;
	}
}