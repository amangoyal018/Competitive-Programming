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
    string s;
    cin >> s;
    int index = 0;
    int n = s.length();
    auto t = s.find("h", index);
    // cout << t;
    if (t != string::npos)
    {
        index = t + 1;
    }
    else
    {
        cout << "NO";
        return 0;
    }
    t = s.find("e", index);
    // cout << t;
    if (t != string::npos)
    {
        index = t + 1;
    }
    else
    {
        cout << "NO";
        return 0;
    }
    // cout<<index;
    t = s.find("l", index);
    if (t != string::npos)
    {
        index = t + 1;
    }
    else
    {
        cout << "NO";
        return 0;
    }
    // cout<<index;

    t = s.find("l", index);
    if (t != string::npos)
    {
        index = t + 1;
    }
    else
    {
        cout << "NO";
        return 0;
    }
    // cout<<index;
    t = s.find("o", index);
    if (t != string::npos)
    {
        index = t + 1;
    }
    else
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    }
