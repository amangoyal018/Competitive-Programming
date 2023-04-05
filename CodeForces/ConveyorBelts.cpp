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


    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;


        int ans1=min(x1,n-x1+1);
        int ans2=min(y1,n-y1+1);
        int fans1=min(ans1,ans2);


        ans1=min(x2,n-x2+1);
        ans2=min(y2,n-y2+1);
        int fans2=min(ans1,ans2);

        cout<<abs(fans2-fans1)<<"\n";



    }


    
    

}