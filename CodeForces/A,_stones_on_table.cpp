#include<bits/stdc++.h>
using namespace std;



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
    for(int i=1;i<elements;i++){
        if(order[i-1]==order[i+1]){
            order.erase(1,1);
        }
    }
    












    
    return 0;
    

}            