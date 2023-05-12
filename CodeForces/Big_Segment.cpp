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

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pair<int,int> p={a,b};

        v.push_back(p);
    }
    int min1=v[0].first,max2=v[0].second;
    for(int i=1;i<n;i++){
        if(v[i].first<min1){
            min1=v[i].first;
        }
        if(v[i].second>max2){
            max2=v[i].second;
        }
    }
    bool status=false;
    pair<int,int> p1={min1,max2};

    for(int i=0;i<n;i++){
        if(v[i]==p1){
            status=true;
            cout<<i+1;
        }
    }
    if(status){

    }else{
        cout<<-1;
    }
    
    

    
    
    



}