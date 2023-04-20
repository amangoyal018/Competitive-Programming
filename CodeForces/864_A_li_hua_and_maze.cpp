#include <bits/stdc++.h>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;


        int adj1=0;
        int adj2=0;

        if(0<x1-1 and x1-1<=n){
            adj1++;

        }
        if(0<x1+1 and x1+1<=n){
            adj1++;

        }
        if(0<y1-1 and y1-1<=m){
            adj1++;

        }
        if(0<y1+1 and y1+1<=m){
            adj1++;

        }



        if(0<x2-1 and x2-1<=n){
            adj2++;

        }
        if(0<x2+1 and x2+1<=n){
            adj2++;

        }
        if(0<y2-1 and y2-1<=m){
            adj2++;

        }
        if(0<y2+1 and y2+1<=m){
            adj2++;

        }
        cout<<min(adj1,adj2)<<endl;
        
    }



}