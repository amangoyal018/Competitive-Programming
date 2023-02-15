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

    vector<pair<int, int>> vec;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        vec.push_back({i, a});
    }
    int a;
    
    
    for (int i = 0; i < n; i++){
        if(vec[i].second<=m){
            if(i==n-1){
                a=vec[i].first;
            }
            vec[i].second=0;
        }else{
            
            vec[i].second-=m;
            vec.insert(vec.end(),vec[i]);
            vec.erase(vec.begin()+i);
            i--;

        }
    }
    cout<<a;
    
}