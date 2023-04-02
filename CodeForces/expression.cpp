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

    int a,b,c;


    cin>>a>>b>>c;

    int ans=a+b+c;
    ans=max(ans,a*b*c);
    ans=max(ans,a*(b+c));
    ans=max(ans,a*b+c);
    ans=max(ans,(a+b)*c);
    ans=max(ans,a+b*c);
    cout<<ans;

    return 0;
}