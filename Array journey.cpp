#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef pair <lli,lli> pii;
#define ff first
#define ss second
#define MOD 1000000007
#define pb push_back

int main(){
	fast;
	lli n,k;
	cin>>n>>k;
	vector <lli> path(n);
	for (int i=0;i<n;i++) 
		cin>>path[i];
	deque <pair <int,int> > qu;
	int time=1;
	qu.push_back({time++,path[n-1]});
	for (int i=n-2;i>=0;i--)
	{	
		while (!qu.empty() && time-qu.front().ff>k) qu.pop_front();
		pair <int,int> curr=make_pair(time++,qu.front().ss+path[i]);
		if (i==0){
			cout<<curr.ss<<endl;
			break;
		}
		while (!qu.empty() && qu.back().ss<=curr.ss) qu.pop_back();
		qu.push_back(curr);
	}
	return 0;
}