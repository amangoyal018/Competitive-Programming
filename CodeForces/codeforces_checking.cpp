#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin>>num;

    string s="codeforces";
    for(int i=0;i<num;i++){
        char char1;
        cin>>char1;
        if(s.find(char1)==string::npos){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }


    }
    

    
    












    
    return 0;
    

}            