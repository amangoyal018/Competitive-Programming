#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n;
        int X;
        int m;
        cin>>n>>X>>m;
        vector <int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        // vector <int> list;
        
        int maxsum=0;
        int maxe2=0;


        for(int i=0;i<=m;i++){
            vector <int> vcopy;
            for(auto x:v){
                vcopy.push_back(x);
            }
            int c1=i;
            int c2=m-i;
            // cout<<c1<<c2<<endl;
            
            int sum1=0;
            int maxe=0;
            

            for(int i=0;i<c1;i++){
                if(vcopy[0]>maxe){
                    maxe=vcopy[0];
                }

                sum1+=vcopy[0];
                
                vcopy.erase(vcopy.begin());

            }
            
            for(int i=0;i<c2;i++){
                if(vcopy.back()>maxe){
                    maxe=vcopy.back();
                }

                sum1+=vcopy.back();
                // cout<<vcopy.back();
                vcopy.pop_back();

            }
            
            if(sum1>maxsum){
                maxsum=sum1;
                maxe2=maxe;

            }
            
            


        }
        // for(int i=0;i<m;i++){
        //     int a=v.front();
        //     int b=v.back();
        //     if(a<0 or b<0){
        //         continue;
        //     }
        //     if(a>=b){
        //         v.erase(v.begin());
        //         list.push_back(a);
        //     }else{
        //         v.pop_back();
        //         list.push_back(b);
        //     }

        // }
        // int sum=0;
        // int max=list[0];
        // for(auto x:list){
        //     sum+=x;
        //     if(x>max){
        //         max=x;
        //     }
        // }

        int c=maxsum*maxe2;
        

        if(c >= X){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }




}