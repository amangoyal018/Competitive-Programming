#include <bits/stdc++.h>
using namespace std;


bool lucky(int n){
    while(n>0){
        int a;
        a=n%10;
        if(a==4 or a==7){
            n/=10;
            continue;
        }else{
            return 0;
        }

        
    }
    return 1;
}

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

    // cout<<lucky(n);


    int a=1;

    for(int i=4;i<=n;i++){
        if(n%i==0 and lucky(i)){
            a=0;
            cout<<"YES";
            break;
        }
    }
    if(a==1){
        cout<<"NO";
    }
    
    


}