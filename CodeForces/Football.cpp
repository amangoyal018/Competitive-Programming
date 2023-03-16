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

    int n,ct1=0,ct2=0;
    cin>>n;

    string t1,t2;
    cin>>t1;
    // cout<<t1;
    ct1++;
    // cout<<ct1;
    for(int i=1;i<n;i++){
        string s;
        cin>>s;
        if(s==t1){
            ct1++;
        }else{
            t2=s;

            
            ct2++;
        }
    }
    // cout<<ct2;
    (ct1>ct2)?(cout<<t1):(cout<<t2);
}





    
