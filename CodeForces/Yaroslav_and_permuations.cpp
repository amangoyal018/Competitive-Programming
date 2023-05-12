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

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    unordered_set<int> v1;
    for(auto x:v){
        v1.insert(x);
    }

    for(auto x:v1){
        int count=0;
        for(auto y:v){
            if(x==y){
                count++;
            }
        }
        if(count>(n+1)/2){
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
    
    
    

    
    
    



}