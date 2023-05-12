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
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        

        vector<ll> v;

        ll sum=0;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            v.push_back(a);
            
            sum+=a;
        }
        sort(v.begin(),v.end());
        vector<ll> vprefix(n);

        vprefix[0]=v[0];
        


        for(ll i=0;i<n;i++){

            if(i>0){

                    vprefix[i]=v[i]+vprefix[i-1];
            }
        }

        ll start=0;
        ll end=n-1-k;

        ll tempsum=vprefix[end];
        ll maxsum=tempsum;

        for(ll i=1;i<=k;i++){
            start+=2;
            end++;
            tempsum=vprefix[end]-vprefix[start-1];

            if(tempsum>maxsum){
                maxsum=tempsum;
            }

            

            
        }
        cout<<maxsum<<"\n";


    }
    
    

    
    
    



}