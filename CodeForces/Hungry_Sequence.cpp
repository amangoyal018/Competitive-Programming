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
//we can print all the primes from start 
//pr we can print consecutive n numbers that are large so that they will do not divide each other

    ARA_ARA
    long long int x;
    cin>>x;

    long long int n=1e7;
    n-=x;
    for(int i=0;i<x;i++){
        cout<<n<<" ";
        n++;
    }
    

    // vector<long long int> v(n+1,1);

    // v[1]=0;

    // for(long long int i=1;i<=n;i++){
    //     if(v[i]==1){
    //         for(long long int j=i*i;j<=n;j+=i){
    //             v[j]=0;

    //         }
    //     }
    // }
    // int count=0;

    

    // for(long long int i=1;i<=n;i++){
    //     if(count==x){
    //         break;
    //     }
    //     if(v[i]==1){
    //         cout<<i<<" ";
    //         count++;
    //     }
    // }

    
    

    
    
    



}