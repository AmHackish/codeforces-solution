#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<int> v(2);
	cin >> v[0] >> v[1];
	sort(v.begin(),v.end());
	int n;
	n = 6-v[1]+1;
	if(n == 3)
		cout << "1/2" << endl;
	else if(n == 0)
		cout << "0/1" << endl;
	else if(n == 6)
		cout << "1/1"<<endl;
	else if(n == 1 or n ==5)
		cout << n <<"/6"<<endl;
	else if(n==2)
		cout << "1/3"<<endl;
	else if(n==4)
		cout << "2/3"<<endl;
	return 0;
}  