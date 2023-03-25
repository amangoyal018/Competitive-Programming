#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    vector<int> v;

    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    int b=1e9;

    int result=v[n-1]-v[0];
    

    for(int k=0;k<=m-n;k++){
        b=min(b,v[k+n-1]-v[k]);
    }
    cout<<b;
    
    
}