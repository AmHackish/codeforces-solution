#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	vector<int> repeat(n);
	for(int i=0; i<n; i++)
		cin >> repeat[i];
	int cheast = 0, back=0,biceps=0;
	if(n>=3)
	{
		for(int i=0; i<n; i++)
		{
			cheast = cheast + repeat[i];
			i++;
			biceps = biceps+ repeat[i];
			i++;
			back = back +repeat[i];
			
		}
		int maxi,maxii;
		maxi = (cheast > back) ? cheast : back;
		maxii = (maxi > biceps) ? maxi : biceps;
		if(cheast == maxi)
			cout << "chest" << endl;
		else if(back = maxi)
			cout << "back" << endl;
		else if(biceps = maxi)
			cout << "biceps" << endl;
	}
	else if(n == 2)
	{
		cheast = repeat[0];
		biceps = repeat[1];
		int maxi;
		maxi = (cheast > biceps) ? cheast : biceps;
		if(cheast == maxi)
			cout << "chest" << endl;
		else if(biceps = maxi)
			cout << "biceps" << endl;
	}
	else if(n==1)
	{
		cout << "chest" << endl;
	}

	return 0;
}