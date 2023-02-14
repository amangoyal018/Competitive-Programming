#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    // int x=s.length();
    for(auto x:s){
        if(x=='H'||x=='Q'||x=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";







    return 0;
}