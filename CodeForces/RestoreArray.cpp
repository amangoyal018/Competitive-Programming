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
    cin>>t;

    while(t--){
        int a;
        cin>>a;

        vector<int> v;

        for(int i=1;i<a;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        // int min=*min_element(v.begin(), v.end());

        vector<int> ans(a);

        int flag=0;
        ans[0]=v[0];
        ans[a-1]=v[a-2];


        for(int i=0;i<a-2;i++){
            ans[i+1]=min(v[i],v[i+1]);
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<"\n";


    }

    

    
}