#include<bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long int lli;
using namespace std;

int main()
{
	OPTIMASI

	long long int da,db;
	cin >> da >> db;

	if(da == 9 and db == 1)
		cout << 9 << " " << 10 << endl;
	else if(abs(da-db)>=2)
		cout << -1 << endl;
	else if(da-db == 0)
		cout << da << 12 << " " << db << 13 << endl;
	else if(db-da == 1)
		cout << da << 99 << " " << db << 0 << 0 << endl;
	else
		cout << -1 << endl;
	return 0; 
}