
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


    // int n;
    // int m;
    // cin>>n>>m;
    // int flag=1;  // akshat

    // while(n>0 and m>0){
    //     n--;
    //     m--;
    //     flag=1-flag;
    // }
    // // cout<<n<<m;
    // if(flag){
    //     cout<<"Malvika";
    // }else{
    //     cout<<"Akshat";
    // }

    int n;
    int m;
    cin>>n>>m;
    int flag=min(n,m);  // akshat

    // cout<<n<<m;
    if(flag%2==0){
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
}