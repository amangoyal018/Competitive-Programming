#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b,c;
    cin>>a>>b>>c;
    if(a.length()+b.length()!=c.length()){
        cout<<"NO";
        return 0;
    }else{
        for(int i=0;i<a.length();i++){
            char d=a[i];
            if(c.find(d)==string::npos){
                cout<<"NO";
                return 0;
            }else{
                int pos=c.find(d);
                
                c=c.erase(pos,1);

            }
        }
        for(int i=0;i<b.length();i++){
            char d=b[i];
            if(c.find(d)==string::npos){
                cout<<"NO";
                return 0;
            }else{
                int pos=c.find(d);
                
                c=c.erase(pos,1);

            }
        }
        if(c.length()==0){
            cout<<"YES";

        }else{
            cout<<"NO";
        }

    }
    
    













    return 0;
    

}            