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
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    int min = vec[0];
    for (auto x : vec)
    {
        if (x < min)
        {
            min = x;
        }
    }
    // cout<<min<<endl;
    int cnt = 0;
    int z;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == min)
        {
            z = i + 1;

            cnt++;
        }
    }
    if (cnt > 1)
    {
        cout << "Still Rozdil";
    }
    else
    {
        cout << z;
    }
}