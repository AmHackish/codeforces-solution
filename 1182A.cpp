#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sol=1;
	if(n%2==0)
		for(int i=0;i<n;i+=2)
			sol*=2;
	cout << ((n%2)?0:sol) << endl;
	return 0;
}  