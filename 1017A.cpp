#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> score(n);
	int rank = 1,s,k=0;
	for(int i=0; i<n; i++)
	{
		int e,g,m,h;
		cin >> e >> g >> m >> h;
		score[i] 
		= e+g+m+h;
	}
	s = score[0];
	sort(score.begin(), score.end(),greater <>());
	for(int i=0; i<n; i++)
		if(s == score[i])
		{
			rank = i+1;
			break;
		}
	cout << rank;
	return 0;
}  