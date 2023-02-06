#include<bits/stdc++.h>
using namespace std;
bool check_(string s){
    char a;
    for(int i=0;i<s.length();i++){
        if(i==0){
            a=s[i];
        }else{
            if(s[i]==a){
                return true;
            }else{
                a=s[i];
            }
        }
    }
    return false;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int elements;
    string order;
    cin>>elements;
    cin>>order;
    // int count=order.length();
    
    while(check_(order)){
        
        char x;
        for(int i=0;i<order.length();i++){
            if(i==0){
                x=order[i];

            }else{
                if(order[i]==x){
                    // cout<<i<<endl;
                    // cout<<order<<endl;
                    order.erase(i,1);
                    break;
                    // cout<<order<<endl;
                }else{
                    x=order[i];
                }
            

            }
        }
        
        // break;

    }
    // cout<<elements<<endl;
    cout<<elements-order.length();
    












    
    return 0;
    

}            