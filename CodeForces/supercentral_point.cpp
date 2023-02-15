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
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a = v[i].first;
        int b = v[i].second;
        
        int right = 0, left = 0, up = 0, down = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                int c = v[j].first;
                int d = v[j].second;
                // cout<<c<<d<<endl;
                if (c > a && d == b)
                {
                    right++;
                }
                else if (c < a && d == b)
                {
                    left++;
                }
                else if (c == a && d < b)
                {
                    down++;
                }
                else if (c == a && d > b)
                {
                    up++;
                }
            }
        }
        // break;
        if(right>0&&left>0&&down>0&&up>0){
            count++;
        }
    }
    cout<<count;
}