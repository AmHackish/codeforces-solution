#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool check(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i] ==  2)
			return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); 

  	int n;
  	cin >> n;

  	vector<int>p(n),ans;
  	for(int i=0;i<n;i++)
  	{
  		cin >> p[i];
  		p[i]--;
  	}

  	for(int j=0;j<n;j++)
  	{
  		int k = j;
  		vector<int> v(n,0);
  		do {
 			v[k]++;
  			k = p[k];
  		}
  		while(check(v));
 		for(int i=0;i<n;i++)
 		{
 			if(v[i] == 2)
 			{
 				ans.push_back(i+1);
 				break;
 			}
 		}
  	}
  	for(auto x : ans)
  		cout << x << " ";
  	cout << endl;
  	return 0;
}