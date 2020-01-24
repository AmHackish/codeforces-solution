#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n,k;
	cin >> n >> k;

	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	vector<int>sol;
	vector<int>::iterator it;

	int m=0;
	for(int i=0;i<n;i++)
	{
		it = find(sol.begin(),sol.end(),a[i]);
		if(it !=sol.end())
			continue;
		else if(m<k and it == sol.end())
		{
			sol.insert(sol.begin(),1,a[i]);
			m++;
		}
		else
		{
			sol.erase(sol.begin()+sol.size()-1);
			m--;
			i--;
		}
	}
	cout << sol.size() << endl;
	for(int j=0;j<sol.size();j++)
			cout << sol[j] << " ";
	cout << endl;
	return 0;
}
  