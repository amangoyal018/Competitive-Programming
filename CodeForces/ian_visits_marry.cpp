#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ARA_ARA

    srand(time(NULL));

    int t;
    cin>>t;
    // cout<<t;

    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0 and b==0){
            cout<<0<<"\n";
        }else if(b==0){
            cout<<2<<"\n";
            cout<<a<<" "<<1<<"\n";
            cout<<a<<" "<<b<<"\n";
        }
        else if(a==0){
            cout<<2<<"\n";
            cout<<1<<" "<<b<<"\n";
            cout<<a<<" "<<b<<"\n";
        }else if(a==1 or b==1){
            cout<<1<<"\n";
            cout<<a<<" "<<b<<"\n";
        }else{
            cout<<2<<"\n";
            cout<<1<<" "<<b-1<<"\n";
            cout<<a<<" "<<b<<"\n";
        }

    }

        
}
    
    

    



