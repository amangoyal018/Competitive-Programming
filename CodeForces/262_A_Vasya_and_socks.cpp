#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(n) for(int i=0;i<n;i++);
#define ll long long int 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ARA_ARA

    int n,m;
    cin>>n>>m;
    
    int i;
    for(i=1;n>0;i++){
        if(i%m==0){
            n++;
        }
        n--;
    }
    cout<<i-1;


    


    

    



}