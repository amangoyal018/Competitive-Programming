#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ARA_ARA

    int t;
    cin>>t;
    while(t--){
        long long int n;
        vector<long long int> v;
        cin>>n;
        for(int i=0;i<n;i++){
            long long int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        int long long a=v[0]*v[1];
        int long long b=v[n-2]*v[n-1];
        cout<<max(a,b)<<"\n";
    }

    
    
    



}