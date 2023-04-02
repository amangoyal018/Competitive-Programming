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
    cin >> t;
    while (t--)
    {
        int n;
        string s, result;
        cin >> n >> s;
        char c = s[0];
        int temp = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == c)
                temp++;
            else if (s[i] != c)
            {
                if (temp%2!=0)
                    result += c;
                else
                    result.append(2, c);
                c = s[i];
                temp = 1;
            }
        }
        if (temp != 1)
        {
            if (temp%2!=0)
                result += c;
            else
                result.append(2, c);
        }
        else
            result += c;
        cout << result << endl;
    }
}