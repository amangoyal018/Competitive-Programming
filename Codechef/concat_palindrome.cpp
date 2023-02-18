#include <bits/stdc++.h>
using namespace std;

string aftr_one_sec(string s, int n)
{
    string str = s;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (s[0] == '+' or s[0] == '-')
            {
                continue;
            }
            else
            {
                s[0] = s[1];
            }
        }
        else if (i == n - 1)
        {
            if (str[i] == '+' or str[i] == '-')
            {
                continue;
            }
            else
            {
                s[i] = str[n - 2];
            }
        }
        else
        {
            if (s[i] == '+' or s[i] == '-')
            {
                continue;
            }
            else
            {
                char a = str[i - 1];
                char b = str[i + 1];
                if (a == b)
                {
                    s[i] = a;
                }
                else
                {
                    if((a=='+'&&b=='-') or (a=='-' and b=='+')){
                        continue;
                    }else{
                        if(a=='0'){
                            s[i]=b;
                        }else{
                            s[i]=a;
                        }
                    }
                }
            }
        }
    }
    return s;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        unordered_set<string> seen;
        while (seen.find(s) == seen.end())
        {
            seen.insert(s);
            s = aftr_one_sec(s, n);
        }

        int cnt = 0;
        for (auto x : s)
        {
            if (x == '0')
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
