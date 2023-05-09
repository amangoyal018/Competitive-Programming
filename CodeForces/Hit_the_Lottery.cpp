#include <bits/stdc++.h>
using namespace std;
#define Jai_shree_ram ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Jai_shree_ram

    int n;
    cin>>n;
    int count=0;
    
        
    int a=n/100;
    count+=a;
    n=n-(100*a);
    a=n/20;
    count+=a;
    n=n-(20*a);
    a=n/10;
    count+=a;
    n=n-(10*a);
    a=n/5;
    count+=a;
    n=n-(5*a);
    a=n/1;
    count+=a;
    n=n-(1*a);
    
    
        

    
    
    cout<<count;
    



}