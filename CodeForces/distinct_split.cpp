#include<bits/stdc++.h>
using namespace std;
int f(string &s){
    string a="";
    for(int i=0;i<s.length();i++){
        if(i==0){
            a+=s[i];
        }else{
            if(a.find(s[i])==string::npos){
                a+=s[i];
            }else{
                continue;
            }
        }
    }
    return a.length();

}



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int len;
        string s;
        cin>>len>>s;
        int max;
        for(int j=1;j<=len-1;j++){
            string a=s.substr(0,j);
            string b=s.substr(j,len-j);
            int x=f(a)+f(b);
            if(j==1){
                max=x;
            }else{
                if(x>max){
                    max=x;
                }else{
                    continue;
                }
            }
            
        }
        cout<<max<<"\n";


    }
    
    












    
    return 0;
    

}            