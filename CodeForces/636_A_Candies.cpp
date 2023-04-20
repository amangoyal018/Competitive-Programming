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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=1;
        for(int i=2;i<n;i*=2){
            sum+=i;
            if(n%sum==0){
                cout<<n/sum<<"\n";
                break;
            }
        }
        
    }

    


    

    



}