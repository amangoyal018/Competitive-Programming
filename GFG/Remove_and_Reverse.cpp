#include <bits/stdc++.h>
using namespace std;

// int check1(string &S){
//     int len=S.length();

//     for(int i=0;i<len;i++){
//         int c=i;
//         char a=S[i];
//         if(S.find(a,i+1)==string::npos){
//             continue;
//         }else{
//             return c;
//         }
//     }
//     return -1;

    

// }

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin>>S;

    reverse(S.begin(),S.end());
    

    set<char> set1;
    int lenS=S.length();
    string result;

    for(int i=0;i<lenS;i++){
        int a = set1.size();
        set1.insert(s[i]);
        int b = set1.size();
        if(b==a){
            


        }else{

        }
    }
    
    

    
}