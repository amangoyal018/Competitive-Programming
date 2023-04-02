#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m=0;
        vector<int> steps;
        if (n % 2 == 0 || n < 2) {
            cout<<-1<<endl;
            continue;
        }

        while (n != 1) {
            m++;
            if (n%4==1) {
                steps.push_back(1);
                n = (n/2)+1;
            } else {             
                steps.push_back(2);
                n /= 2;
            }
        }
        
        reverse(steps.begin(), steps.end());


        cout<<m<<endl;
        for(auto x:steps){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}
