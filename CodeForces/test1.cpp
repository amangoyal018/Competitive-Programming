#define ll long long
// #define all(x) (x).begin(),(x).end
// #define watch(x) cout<<(#x) << " : "<<x<<"\n"
#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll> k(n);
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    sort(k.begin(),k.end());

    auto get_position = [&](ll val) -> int{
        auto it=lower_bound(k.begin(),k.end(),val);
        if(it==k.end()){
            return(int)k.size();
        
        }
        return (int)(it-k.begin());
            

    };
    auto _find = [&](int l,int r,ll& b,ll& cns) -> ll {
        ll res= 1e18;
        for(int x=l;x<=r && res==1e18;x++){
            if(0<=x && x<n && 4*cns>(k[x]-b)*(k[x]-b)){
                res=k[x];
            }

        }
        return res;

    };

    for(int i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a*c<0){
            cout<<"NO\n";
        }else{
            ll cns=a*c;
            ll s=sqrtl(cns) *2ll;
            int bin=get_position(b-s);

            ll res =_find(bin-10,bin+10,b,cns);
            if(res !=1e18){
                cout<<"YES\n"<<res<<"\n";
                continue;
            }
            bin=get_position(s-b);
            res =_find(bin-10,bin+10,b,cns);
            if(res !=1e18){
                cout<<"YES\n"<<res<<"\n";
                continue;
            }
            cout<<"NO\n";
        }
    }
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}