#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,l,m,n,d,dragons=0;
    cin >> k >> l >> m >> n >> d;
    for(int i=2; i<=d; i++)
    {
        if((i%k) == 0 or (i%l) == 0 or (i%m) == 0 or (i%n) == 0)
            dragons++;
    }
    if(k == 1 or l == 1 or n == 1 or m == 1)
        dragons = dragons + 1;
    cout << dragons;
    return 0;
}