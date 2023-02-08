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
    
    int count=0;
    for(int i=0;i<s.length();i++){
        int sum=0;
        for(int k=0;k<i;k++){
            if(s[i]==s[k]){
                sum++;

            }else{
                continue;
            }

        }
        if(sum==0){
            count++;
        }

    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    
    













    return 0;
    

}            