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

    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);

    }
    int sum=0;

    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    int minsum=sum;
    for(int i=1;i<=n-k;i++){
        sum+=v[k+i-1]-v[i-1];
        if(sum<=minsum){
            minsum=sum;
        }

    }
    // cout<<minsum;
    sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    if(sum==minsum){
        cout<<1;
        return 0;
        
    }
    // cout<<sum;
    for(int i=1;i<=n-k;i++){
        sum+=v[k+i-1]-v[i-1];
        if(sum==minsum){
            cout<<i+1;
            break;
        }

    }
    
    
    

    
    
    



}