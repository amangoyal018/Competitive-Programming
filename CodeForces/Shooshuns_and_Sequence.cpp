#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 

bool check(vector<int> v,int n){
    sort(v.begin(),v.end());
    if(v[0]==v[n-1]){
        return 1;
    }else{
        return false;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ARA_ARA

    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);

    }
    int constant=v[k-1];
    for(int i=k-1;i<n;i++){
        if(v[i]!=constant){
            cout<<"-1";
            return 0;
        }
    }
    int index=-1;

    for(int i=0;i<n;i++){
        if(v[i]!=v[n-1]){
            index=i;
        }
    }
    cout<<index+1;
    

    

    
    
    



}