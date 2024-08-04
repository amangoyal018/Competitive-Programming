#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool are_equal(vector<int>& v1, vector<int>& v2) {
    unordered_map<int, int> m;
    for (int i = 0; i < v2.size(); ++i) {
        m[v2[i]] = i;
    }

    int n = v1.size();
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (v1[i] != v2[i]) {
            cnt++;
            int swap_idx = m[v1[i]];
            swap(v2[i], v2[swap_idx]);
            m[v2[swap_idx]] = swap_idx;
            m[v1[i]] = i;
        }
    }
    return cnt % 2 == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> u = a;
        vector<int> v = b;
        sort(u.begin(), u.end());
        sort(v.begin(), v.end());

        if (u != v) {
            cout << "NO\n";
        } else {
            if (are_equal(a, b)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}