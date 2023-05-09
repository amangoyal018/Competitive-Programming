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

    ARA_ARA
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // int min=min(n,m);
        ll total=n*m;
        vector<int> v;
        for(int i=0;i<total;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int vmin=v[0];
        int vmin2=v[1];
        int vmax=v[n*m-1];
        int vmax2=v[n*m-2];
        int a=(total-min(n,m))*(vmax-vmin)+(min(n,m)-1)*(vmax-vmin2);

        int b=(total-min(n,m))*(vmax-vmin)+(min(n,m)-1)*(vmax2-vmin);

        cout<<max(a,b)<<"\n";
    }
    
    

    
    
    



}