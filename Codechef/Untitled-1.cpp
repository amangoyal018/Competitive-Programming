#include<bits/stdc++.h>
using namespace std;

int freq(char a,string s){
    int x=s.length();
    int count=0;
    for(int i=0;i<x;i++){
        if(s[i]==a){
            count++;
        }
    }
    return count;
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        vector<string> vec;


        for(int i=0;i<n;i++){
            for(int len=1;len<=n-i;len++){
                string b;
                b=s.substr(i,len);
                int m=b.length();
                int alpha=0;
                if(i==0&&len==1){
                    vec.push_back(b);
                }else{


                    for(auto x:vec){
                        if(x==b){
                            alpha++;
                            
                            continue;
                        }else{
                            vec.push_back(b);

                        }

                    }

                }
                if(alpha!=0){
                    continue;
                }


                // cout<<b<<endl;
                for(int o=0;o<m;o++){
                    char c=b[o];
                    if(2*freq(c,b)-m==k){
                        count++;
                    }


                }
            }
        }
        cout<<count<<"\n";


    }
    
    

}            