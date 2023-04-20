#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(n) for(int i=0;i<n;i++);
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
        ll n;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(i&1){
                cout<<2*n+1-i<<" ";
            }else{
                cout<<i<<" ";

            }
        }
        cout<<"\n";
        for(int i=1;i<=n;i++){
            if(i&1){
                cout<<i<<" ";
            }else{
                cout<<n+i-1<<" ";

            }
        }
        cout<<"\n";



    }


    

    



}