#include <bits/stdc++.h>
using namespace std;

// bool checkperm(vector<int> v,int n){

//     for(int i=1;i<n;i++){

//         if(v[i]-v[i-1]==1){
//             return 0;
//         }

//     }
//     return 1;
// }

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    // cout<<t;

    while(t--){

        int n;
        cin>>n;

        vector<int> v;
        v.reserve(n);
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }

        for (int i = 1; i < n; i++)
        {
            int max_val = *max_element(v.begin(), v.end());
            int min_val = *min_element(v.begin(), v.end());
            v.erase(find(v.begin(), v.end(), max_val));
            v.erase(find(v.begin(), v.end(), min_val));
            v.push_back(max_val - min_val);
        }

        cout << v[0] << endl;


    }
        


    return 0;
}