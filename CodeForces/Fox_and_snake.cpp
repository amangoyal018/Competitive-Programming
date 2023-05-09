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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i%2==0 and i%4!=0) and j<m){
                cout<<".";
            }else if(i%4==0 and j>1){
                cout<<".";
            }else{
                cout<<"#";
            }

        }
        cout<<"\n";
    }
    
    

    
    
    



}