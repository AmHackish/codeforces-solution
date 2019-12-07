#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    vector<int>a(26);
    vector<int>b;
    for(int i=0; i<s.length(); i++)
        a[s[i]-'a']++;
    int k=0;
    sort(a.begin(),a.end());
    for(int i=0; i<26; i++)
        if(a[i]!=0)
            b.push_back(a[i]);

    for(auto u:b)
        cout << u << " ";
    
    if(b.size()==1)
        return "YES";
    vector <int> c(b[b.size()-1]+1);
    for(int i=0;i<b.size();i++)
        c[b[i]]++;
    vector<pair<int,int> > d;
    for(int i=0;i<c.size();i++)
        if(c[i])
        {
            pair <int,int> temp;
            temp.first=i;
            temp.second=c[i];
            d.push_back(temp);
        }
    if(d.size()>2)
        return "NO";
    if(d[0].second > 1 and d[1].second > 1)
        return "NO";
    if(d[1].second == 1 and (d[1].first - d[0].first)==1)
        return "YES";
    if(d[0].first == 1 and d[0].second == 1)
        return "YES";
    return "NO";
}

int main()
{
    string s;
    getline(cin, s);

    string result = isValid(s);

    cout << result << "\n";

    
    return 0;
}
