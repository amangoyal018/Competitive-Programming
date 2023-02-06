#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n){
    int s=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            s++;
        }
    }
    if(s==0){
        return true;
    }else{
        return false;
    }
}




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num1,num2;
    cin>>num1>>num2;
    for(int i=num1+1;i<num2;i++){
        if(check_prime(i)){
            cout<<"NO";
            return 0;
        }

    }
    if(check_prime(num2)){
        cout<<"YES";
        return 0;
    }else{
        cout<<"NO";
        return 0;
    }
    
    
    












    
    return 0;
    

}            