#include<bits/stdc++.h>
using namespace std;
// int sum_of_digits(int n){
//     int sum=0;
//     while(n>0){
//         int a = n%10;
//         sum+=a;
//         n/=10;
//     }
//     return sum;
    


// }
// int reverse(int n){
//     int s=0;
//     while(n>0){
//         int rem=n%10;
//         s=s*10+rem;
//         n/=10;


//     }
//     return s;
// }
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        
        int a=0,b=0;
        int flag=1;
        int t=-1;
        while(n>0){
            t++;
            int remainder=n%10;
            
            if(remainder%2==0){

                a=(a)+(remainder/2)*pow(10,t);
                b=(b)+(remainder/2)*pow(10,t);
                
            }else{
                if(flag==0){
                    a=(a)+((remainder+1)/2)*pow(10,t);
                    b=(b)+(remainder/2)*pow(10,t);
                }else{
                    a=(a)+(remainder/2)*pow(10,t);
                    b=(b)+((remainder+1)/2)*pow(10,t);
                    

                }
                flag=1-flag;


            }
            n/=10;
        }
        cout<<a<<" ";
        cout<<b<<"\n";

    
    }
    

}            