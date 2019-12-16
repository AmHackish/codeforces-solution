#include <bits/stdc++.h>

using namespace std;
int main()
{
	long long int n,s;
	cin >> n >> s;
	int coins =s/n;
	if(coins*n!=s)
		cout << coins+1<<endl;
	else
		cout << coins << endl;
	return 0;
}  