#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int k2,k3,k5,k6,sum=0;
	cin >> k2 >> k3 >> k5 >> k6;
	if(k5<=k6 and k2>=k5)
	{
		sum+=(256)*k5;
		k2 = k2-k5;
		if(k2>= k3)
			sum+=(32)*k3;
		else
			sum+=(32)*k2;
	}
	else if(k5>k6 and k2>=k6)
	{
		sum+=(256)*k6;
		k2 = k2-k6;
		if(k2>= k3)
			sum+=(32)*k3;
		else
			sum+=(32)*k2;
	}
	else if(k2<k5 and k2<k6)
	{
		sum+=(256)*k2;
	}
	cout << sum << endl;
	return 0;
}  