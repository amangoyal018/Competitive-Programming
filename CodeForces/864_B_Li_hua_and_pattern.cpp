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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> v1;
            for (int j = 0; j < n; j++)
            {
                int a;
                cin >> a;
                v1.push_back(a);
            }
            v.push_back(v1);
        }
        int count = 0;
        for (int i = 0; i < n / 2; i++)
        {
            vector<int> a = v[i];
            vector<int> b = v[n - 1 - i];
            reverse(b.begin(), b.end());

            for (int j = 0; j < n; j++)
            {
                if (a[j] != b[j])
                {

                    count++;
                }
            }
        }
        if(n&1){

            int count1=0;
            vector<int> a = v[n/2];
            vector<int> b = v[n/2];
            reverse(b.begin(), b.end());
            

            for (int j = 0; j < n; j++)
            {
                if (a[j] != b[j])
                {

                    count1++;
                }
            }
            count1/=2;
            count+=count1;
        
        }
        
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }

        if (count > k)
        {
            cout << "NO\n";
        }
        else
        {
            if (count == k)
            {
                cout << "YES\n";
            }
            else
            {
                int rem = k - count;
                if (rem % 2 == 0 or n % 2 != 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
}