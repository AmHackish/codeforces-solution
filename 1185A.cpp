#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<long long int> v(3);
	long long int d,time=0;
	for(int i=0; i<3;i++)
		cin >> v[i];
	cin >> d;
	sort(v.begin(),v.end());
	if((v[1]-v[0])<d)
	{
		time = d -(v[1]-v[0]);
		v[0] -= time;
	}
	if((v[2]-v[1])<d)
	{
		time+=d-(v[2]-v[1]);
		v[2]+=d-(v[2]-v[1]);
	}
	if((v[2]-v[0])<d and v[2]>v[0])
	{
		time += d - (v[2]-v[1]);
		v[2]+=(d - (v[2]-v[1]));
	}
	else if(v[2]<v[0] and (v[0]-v[2])<d)
	{
		time += d-(v[0]-v[2]);
		v[0]-=d-(v[1]-v[2]);
	}
	cout << time << endl;
	return 0;

}  