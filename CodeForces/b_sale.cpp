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
        v.push_back(a)
    }
    

    for(int i=0;i<n;i++){
        if(count==m){
            break;
        }
        int a;
        cin>>a;
        if(a<0){
            sum+=a;
            count++;

        }
    }
    cout<<abs(sum);


    
}