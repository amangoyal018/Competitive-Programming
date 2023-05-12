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
    int n,m;
    cin>>n>>m;
    vector<int> vm;
    vector<int> vn;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vn.push_back(a);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        vm.push_back(a);
    }

    sort(vm.begin(),vm.end());
    sort(vn.begin(),vn.end());

    int min_n=vn[0];
    int max_n=vn[n-1];

    int ans1=max(2*min_n,max_n);

    int min_m=vm[0];

    if(ans1<min_m){
        cout<<ans1;
    }else{
        cout<<-1;
    }
    
    
    

    
    
    



}