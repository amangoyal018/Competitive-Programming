#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);

int gcd(int x, int y) {return y == 0 ? x : gcd(y, x % y);}

int minimumTimeToInitialState(string word, int k) {
        int n = word.length();

        int index = -1;
        for(int i=k;i<n;i+=k){
            string temp1 = word.substr(i,n-i);
            string temp2 = word.substr(0,n-i);
            if(temp1 == temp2){
                index = i;
                cout<<index<<"\n";
            }
        }
        if(index!=-1){
            return index/k;
        }
        if(n%k==0){
            return n/k;
        }else{
            return n/k+1;
        }

    }
//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    
    // cout<<x<<" ";

    minimumTimeToInitialState("abacaba",3);
    
    
	
	
    
    

    
    
    



}