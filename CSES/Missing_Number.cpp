#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll  n;
    cin>>n;
    ll sum1=0;
    ll sum2=n*(n+1)/2;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        sum1+=a;

    }
    cout<<sum2-sum1;

    
    

}            