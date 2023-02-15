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
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int sum2 = sum;
    // cout<<sum2<<endl;
    int ways=0;
    for (int i = 1; i <= 5; i++)

    {
        // cout << i << endl;

        sum2 += i;
        if (sum2 % (n + 1) != 1)

        {
            // cout<<i<<endl;
            ways++;
        }
        sum2 -= i;
    }
    cout<<ways;
}