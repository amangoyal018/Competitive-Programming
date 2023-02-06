#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int min;
    int p;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            int num1=i;
            int num2=n/num1;
            p=2*(num1+num2);

        }
        if(i==1){
            min=p;
        }else{
            if(p<min){
                min=p;
            }
        }

    }
    cout<<min;

    

    













    return 0;
    

}            