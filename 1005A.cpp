#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> num(n);
	int sum=0;
	for(int i=0; i<n; i++)
	{
		cin >> num[i];
		if(num[i] == 1)
			sum++;
	}
	cout << sum << endl;
	vector<int> step;
	vector<int> ans;
	int j=0;
	while(j<n)
	{
		if(num[j] == 1)
			step.push_back(j);
		j++;
	};
	for(int i=0; i<step.size()-1; i++)
		ans.push_back(step[i+1]-step[i]);
	ans.push_back(n-step[step.size()-1]);
	for(int i=0; i<ans.size(); i++)
		cout << ans[i] << " ";
	return 0;
}  