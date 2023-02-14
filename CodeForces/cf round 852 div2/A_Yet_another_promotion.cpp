#include<bits/stdc++.h>
using namespace std;

// int optimal_number(int n,int m){
//     long long int copy1=1;
//     for(long long int i=1;i<n/m;i++){
//         long long int x=i*m+i;
//         if(x>n){
//             break;

            
//         }
//         copy1=i;
//     }
//     return copy1;
// }




void solve(){

    long long int a,b;
    cin>>a>>b;
    long long int n,m;
    cin>>n>>m;
    long long int a3=1e18,a4=1e18;
    int alpha = n/(m+1);
    
    if(n>m){
        // a3 = m * a + (n-m-1) * min(a,b);
        
        a4 = min(a*m*alpha,b*(m+1)*alpha) +(n - (m * alpha) - (alpha)) * min(a,b);
        

    }else{
        a3 = n * min(a , b);

    }
    cout<<min(a3 , a4);
    cout<<"\n";


}

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
        solve();
    
    }
    

} 

