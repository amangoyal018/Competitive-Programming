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

        long double n;
        cin>>n;
        if(n==1){
            cout<<0<<"\n";
            continue;
        }

        long long ans=sqrt(n);
        while(ans*ans>n){
            ans--;
        }
        while(ans*ans<n){
            ans++;
        }
        cout<<ans-1<<"\n";
    }

    


    

    



}