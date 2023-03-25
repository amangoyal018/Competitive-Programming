#include <bits/stdc++.h>
using namespace std;

string removeFirstRepeatingAndReverse(string s) {
    unordered_set<char> seen;
    for (int i = 0; i < s.length(); i++) {
        if (seen.find(s[i]) != seen.end()) {
            s.erase(s.begin() + i);
            return removeFirstRepeatingAndReverse(string(s.rbegin(), s.rend()));
        }
        seen.insert(s[i]);
    }
    return s;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string result = removeFirstRepeatingAndReverse(s);

    cout << result << endl;

    return 0;
}
