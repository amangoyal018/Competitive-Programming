#include <bits/stdc++.h>
using namespace std;

int diffelements(string s){
    int len=s.length();
    unordered_set<char> set1;
    for(int i=0;i<len;i++){
        set1.insert(s[i]);
    }
    return set1.size();
}

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
        int max_value=0;

        for(int i=1;i<n;i++){

        // total permuations=n-1;
            string a="";
            string b="";
            for(int j=0;j<i;j++){
                a+=s[j];
            for(int j=i;j<n;j++){
                b+=s[j];
            }
            int count=diffelements(a)+diffelements(b);
            if(count>max_value){
                max_value=count;
            }

        }




        }
        cout<<max_value<<"\n";
    }
}