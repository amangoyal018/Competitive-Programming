#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x=0;
    while(n--){
        string s;
        cin>>s;
        if(s[0]=='+'||s[1]=='+'){
            x++;
        }else{
            x--;
        }
    }
    cout<<x;














    return 0;
    

}            