#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int cnt1 =0 , cnt2=0, cnt3=0;
	for(int i=1; i<=6; i++)
	{
		if(abs(a-i) < abs(b-i))
			cnt1++;
		else if(abs(a-i) == abs(b-i))
			cnt2++;
		else
			cnt3++;
	}
	cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;
    return 0;
}