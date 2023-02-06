#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string num1,num2;
    cin>>num1>>num2;
    int l1=num1.length();
    int l2=num2.length();
    string ans="";
    for(int i=0;i<l1;i++){
        if(num1[i]!=num2[i]){
            ans+="1";
        }else{
            ans+="0";
        }

    }
    cout<<ans;
    
    
    












    
    return 0;
    

}            