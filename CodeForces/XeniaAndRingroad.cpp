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
    long long int n;
    cin >> n;
    long long int m;
    cin >> m;
    long long int time = 0;
    int cp = 1;
    for (int i = 0; i < m; i++)
    {
        long long int a;
        cin >> a;
        if (a == cp)
        {
            continue;
        }
        if (cp < a)
        {
            time += a - cp;
            cp = a;
            continue;
        }
        if (cp > a)
        {
            time += n - cp + a;
            cp = a;
        }
    }
    cout<<time;
}
