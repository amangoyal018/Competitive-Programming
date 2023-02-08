#include<bits/stdc++.h>
using namespace std;
string decapitalize(string &s){
    for(int i=0;i<s.length();i++){
        if(int(s[i])<=90){
            s[i]+=32;
        }
    }
    return s;
}




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    string s2;
    cin>>s1>>s2;
    decapitalize(s1);
    decapitalize(s2);
    for(int i=0; i< s1.length();i++){
        if(s1[i]>s2[i]){
            cout<<"1";
            return 0;
        }else if(s1[i]<s2[i]){
            cout<<"-1";
            return 0;
        }else{
            continue;
        }
    }
    cout<<0;
















    return 0;
    

}            