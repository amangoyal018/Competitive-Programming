#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int sum;
        cin>>n>>sum;
        long long int ans;
        ans=sum/(n*n);
        cout<<ans<<"\n";
    }

    













    return 0;
    

}            