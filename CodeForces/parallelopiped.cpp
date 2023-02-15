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

    long long int ab,bc,ca;
    cin>>ab>>bc>>ca;

    long long int x=ab*bc*ca;
    long long int y=sqrt(x);
    long long int p=y/ab;
    long long int q=y/bc;
    long long int r=y/ca;

    cout<<(p+q+r)*4;
}