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

    long long int n;
    cin >> n;

    vector<int> v;

    for(int i = 0;i<n;i++){
        long long int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    long long int max=v[n-1]-v[0];
    long long int count;
    long long int count1=0;
    long long int count2=0;

    for(auto x:v){
        if(x==v[n-1]){
            count1++;
        }
    }
    for(auto x:v){
        if(x==v[0]){
            count2++;
        }
    }
    count=count1*count2;

    if(v[0]==v[n-1]){
        count=n*(n-1)/2;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(j==i){
    //             continue;
    //         }
    //         int diff=v[j]-v[i];
    //         if(diff==max){
    //             count++;
    //         }
    //     }
    // }
    cout<<max<<" "<<count;
}