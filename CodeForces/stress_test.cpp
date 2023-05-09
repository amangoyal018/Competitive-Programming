#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void fun(int n){

    if(n%3!=0){
        v.push_back(n);
        return;
    }
    if(n%3==0){
        int a=n/3;
        int b=2*n/3;
        v.push_back(a);
        v.push_back(b);
        if(a%3==0)fun(a);
        if(b%3==0)fun(b);
        
        
    }
    return;
}

int chk(int n, int m){
    if (n == m) return true;
    if (n < m) return false;
    if (n % 3) return false;
    return chk(2 * n / 3, m) or chk(n / 3, m);
}
string FindSecondLargestElement( int n, int m)
{
    
    fun(n);
    bool status=false;
    for(auto x:v){
        if(x==m){
            v.clear();
            status=true;
            return "YES";
            
            
        }
    }
    if(status){
        

    }else{
        
        v.clear();
        return "NO";
    }
    
    
}
string Brute_solution( int n,int m)
{
    return (chk(n, m) ? "YES" : "NO");
    
    
    
}
int main()
{

    srand(time(NULL));
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 1;
    while (count <= 10000)
    {

        int n = rand() %100 +1;
        int m = rand() % 100+1;
        string myans = FindSecondLargestElement( n,m);
        string correctans = Brute_solution(n,m);
        if (correctans != myans)
        {
            cout << n << endl;
            cout << m << endl;
            break;
        }
        count++;
    }
}