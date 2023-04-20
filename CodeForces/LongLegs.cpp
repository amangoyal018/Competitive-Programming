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

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int steps=0;
        int leg=1;

        int min_=min(a,b);
        int max_=max(a,b);

        steps+=min_-1;
        leg=min_;
        
        steps++;



    }

}