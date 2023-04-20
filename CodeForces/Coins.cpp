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
        long long int n,k;
        cin>>n>>k;

        

        if(n%2==0){
            cout<<"YES\n";
        }else if(k%2!=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }


}