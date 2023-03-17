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
    int n,m;
    cin>>n>>m;

    int count=0;
    int sum=0;

    vector <int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());


    for(auto x:v){
        if(count==m){
            break;
        }
        if(x<0){
            sum+=x;
            count++;

        }
    }
    cout<<abs(sum);


    
}