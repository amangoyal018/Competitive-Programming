#include<bits/stdc++.h>
using namespace std;



int count_special_pairs(int n, int k) {
    int mod = 1e9 + 7;
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        dp[i][0] = 1LL * dp[i-1][0] * i % mod;
        for (int j = 0; j <= min(i*(i-1)/2, k); ++j) {
            if(j > 0)
                dp[i][j] = (dp[i][j] + dp[i-1][j-1] * (i-1)) % mod;
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod;
        }
    }
    return dp[n][k];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << count_special_pairs(3,3);
    
    
}