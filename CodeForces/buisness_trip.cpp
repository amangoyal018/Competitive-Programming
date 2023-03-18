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
    int k;
    cin>>k;

    vector <int> v;
    for(int i=0;i<12;i++){
        int a;
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end(),greater<int>());
    // int value=0;
    int count=0;

    for(auto x:v){
        if(k<=0){
            break;
        }
        k=k-x;
        count++;

    }
    if(k>0){
        cout<<-1;
        return 0;
    }
    cout<<count;



}