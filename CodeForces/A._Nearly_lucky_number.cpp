#include<bits/stdc++.h>
using namespace std;

bool check_lucky(int n){
    if(n==0){
        return 0;
    }
    while(n>0){
        int a;
        a=n%10;
        // cout<<a<<endl;
        if(a==4||a==7){
            n/=10;
            continue;
        }else{
            return 0;
        }
        
    }
    return 1;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    long long int input;
    cin>>input;
    int ld=0;
    while(input>0){
        int b;
        b=input%10;
        if(b==4||b==7){
            ld++;
        }
        input=input/10;
        // cout<<input;


    }
    // cout<<ld;
    if(check_lucky(ld)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    












    
    return 0;
    

}            