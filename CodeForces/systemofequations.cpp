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

    int n;
    int m;
    cin>>n>>m;
    // int a,b;
    int count=0;
    for(int i=0;i<=max(n,m);i++){
        for(int j=0;j<=max(n,m);j++){
            if((i+j*j==n) and (i*i+j==m)){
                count++;
            }
        }
        
    }
    cout<<count;

}