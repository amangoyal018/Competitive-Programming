#include<bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int len;
        string s;
        cin>>len>>s;
        while(len>1){
            
        

            if((s[0]=='1'&&s[len-1]=='0')||(s[0]=='0'&&s[len-1]=='1')){
                s=s.substr(1,len-2);
                len-=2;
            }else{
                break;
            }


        }
        cout<<len<<"\n";
    }
    












    
    return 0;
    

}            