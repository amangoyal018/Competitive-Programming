#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=1;
        if(n<1){
            cout<<"0"<<"\n";
            return 0;
        }
        int arrd[n];
        for(int i=0;i<n;i++){
            cin>>arrd[i];
            
        }
        
        for(int i=1;i<n;i++){
            int s=0;
            for(int j=0;j<i;j++){
                int num;
                num=arrd[i];
                if(arrd[j]==num){
                    s++;
                }
                
            }
            if(s==0){
                count++;
            }
        }
        cout<<count<<"\n";
    }
	// your code goes here
	return 0;
}
