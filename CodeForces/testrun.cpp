#include <iostream> 
#include <vector> 
 
using namespace std; 
 
int main() { 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; 
    cin >> t; 
 
    while (t--) { 
        int n; 
        cin >> n; 
        vector<int> a(n); 
 
        for (int i = 0; i < n; i++) { 
            cin >> a[i]; 
        } 
 
        int mx = 1; 
        while (mx <= 1e9) { 
            mx *= 2; 
        } 
 
        mx -= 1; 
 
        int mn = mx; 
        for (int i = 0; i < n; i++) { 
            mn &= a[i]; 
        } 
 
        int ans = 0; 
        int cur = mx; 
 
        for (int i = 0; i < n; i++) { 
            cur &= a[i]; 
            if (cur == 0) { 
                ans += 1; 
                cur = mx; 
            } 
        } 
 
        ans += mn > 0; 
        cout << ans << endl; 
    } 
 
    return 0; 
}