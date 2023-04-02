#include<bits/stdc++.h>
using namespace std;





int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> set1;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        set1.insert(a);

    }
    for(auto x:set1){
        cout<<x;
    }

}