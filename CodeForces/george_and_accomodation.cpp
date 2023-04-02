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


    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;

        if(q-p>1){
            count++;
        }
    }
    cout<<count;

    return 0;
}