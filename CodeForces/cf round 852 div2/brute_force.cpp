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




int solve(long long int a,long long int b,long long int n,long long int m){

    long long int a3=1e9,a4=1e9;
    int alpha = n/(m+1);
    if(n>m){
        a3 = m * a + (n-m-1) * min(a,b);
        
        a4 = a * m * alpha +(n - (m * alpha) - (alpha)) * min(a,b);
        

    }else{
        a3 = n * min(a , b);

    }
    return min(a3 , a4);



}
int solve2(long long int a,long long int b,long long int n,long long int m){
    int sum2=0;
    sum2=n*b;

    int grp =n/m+1;
    int rem = (n-(grp*(m+1)));
    int sum1=0;
    sum1 +=m*a*grp;
    sum2+=rem*a;
    int sum3=0;
    sum3 +=m*a*grp;
    sum3+=rem*b;

    return (sum1,min(sum2,sum3));


}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    srand(time(NULL));
    int t=rand()%1000;
    

    long long int a,b;
    long long int n,m;
    while(t--){
        a=rand()%10;
        b=rand()%10;
        n=rand()%10;
        m=rand()%10;


        int myans=solve(a,b,n,m);
        int correctans=solve2(a,b,n,m);
        if(correctans!=myans){
            
            cout<<a<<" "<<b<<" "<<n<<" "<<m<<"\n";
            cout<<myans<<" "<<correctans;   

            
            break;  
        }


        
    
    }
    

} 

