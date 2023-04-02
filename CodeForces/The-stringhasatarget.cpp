include<bits/stdc++.h>

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
        cin>>n;

        string s;
        cin>>s;

        int min=122;
        char c;


        for(auto x:s){
            if(int(x)<min){
                min=int(x);
                c=char(min);

            }
            
        }
        int index;
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]==c){
                index=i;
            }

        }
        s.erase(index,1);
        reverse(s.begin(),s.end());
        string ans=c+s;
        cout<<ans<<"\n";

    }


}

