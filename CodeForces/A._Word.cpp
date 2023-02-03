#include<bits/stdc++.h>
using namespace std;
string toupper1( string &s){
    for(int i=0;i<s.length();i++){
        if(int(s[i])<=90){
            continue;
        }else{
            s[i]-=32;
        }

    }
    return s;

}
string tolower1( string &s){
    for(int i=0;i<s.length();i++){
        if(int(s[i])<=90){
            s[i]+=32;
        }else{
            continue;
        }

    }
    return s;
    
}
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin>>input;
    int upper=0,lower=0;
    for(auto x:input){
        if(int(x)<=90){
            upper++;
        }else{
            lower++;
        }
    }
    if(upper>lower){
        cout<<toupper1(input);
    }else{
        cout<<tolower1(input);
    }














    return 0;
    

}            