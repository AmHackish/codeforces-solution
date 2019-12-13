#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a,b,n;
	cin >> a >> b >> n;
	float time = 100000;
	while(n--)
	{
		int x,y,v;
		cin >> x >> y >> v;
		float dis = sqrt(((x-a)*(x-a)) + ((y-b)*(y-b)));
		if((dis/v)<time)
			time = dis/v;
		
	}
	cout << setprecision(20) << time << endl;
	return 0;
} 