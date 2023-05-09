#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 

vector<int> v;
void fun(int n){

    if(n%3!=0){
        v.push_back(n);
        return;
    }
    if(n%3==0){
        v.push_back(n);
        int a=n/3;
        int b=2*n/3;
        v.push_back(a);
        v.push_back(b);
        if(a%3==0)fun(a);
        if(b%3==0)fun(b);
        
        
    }
    return;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        fun(n);
        bool status=false;
        for(auto x:v){
            if(x==m){
                cout<<"YES\n";
                v.clear();
                status=true;
                break;
                
            }
        }
        if(status){
            continue;

        }else{
            cout<<"NO\n";
            v.clear();
        }
        


    }
    
    

    
    
    



}