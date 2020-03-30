#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	OPTIMASI
	int n,cnt=1,d=0;
	cin >> n;
	for(int i=0;i<n/2;i++)
	{
		for(int j=1;j<=n/2-d;j++)
			cout << '*';
		for(int k=1;k<=cnt;k++)
			cout << 'D';
		for(int j=1;j<=n/2-d;j++)
			cout << '*';
		cout << endl;
		d++;
		cnt+=2;
	}
	for(int i=0;i<n;i++)
		cout << 'D';
	cout << endl;
	d = 1;
	cnt=n-2;
	for(int i=0;i<n/2;i++)
	{
		for(int j=1;j<=d;j++)
			cout << '*';
		for(int k=1;k<=cnt;k++)
			cout << 'D';
		for(int j=1;j<=d;j++)
			cout << '*';
		cout << endl;
		d++;
		cnt-=2;
	}
	
	return 0;
}