
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
    cin>>n;

    if(n>=0){
        cout<<n;
        return 0;
    }else{
        int a=n/10;
        int b=n/100;
        // cout<<b<<endl;
        b*=10;
        b+=n%10;

        // cout<<n%10;

        cout<<max(a,b);
    }
}