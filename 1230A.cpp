#include <bits/stdc++.h>
 
using namespace std;
 

int main() {
    vector<int> v(4);
    for(int i=0; i<4; i++)
    	cin >> v[i];
    sort(v.begin(), v.end());
    if((v[0] + v[3]) == (v[2] + v[1]))
    	cout << "YES" << endl;
    else if((v[0]+v[1]+v[2]) == v[3])
    	cout << "YES" << endl;
    else
    	cout << "NO" << endl;
    return 0;  
}
