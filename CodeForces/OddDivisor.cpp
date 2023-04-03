
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
        long long int n;
        cin>>n;
        
        while(n%2==0){
            n/=2;
        }
        if(n==1){
            cout<<"no\n";
        }else{
            cout<<"yes\n";
        }


    }
}