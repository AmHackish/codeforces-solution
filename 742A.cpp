#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,ans;
    scanf("%lld",&n);
    if(n%4==0&&n!=0)
        ans=4;
    else
        ans=n%4;
    ans=pow(8,ans);
    ans%=10;
    cout << ans << endl;
    return 0;
}  