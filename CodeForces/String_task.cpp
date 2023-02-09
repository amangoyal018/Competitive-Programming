#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){//all char in lowercase
	    if(s[i]<=90){
	            s[i]+=32;
	    }
	}
	
	int x=s.length();
	for(int i=0;i<x;i++){
	    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
	        s.erase(i,1);
	        i--;
	    }
	}

	x=s.length();
	for(int i=0;i<x;i++){
		cout<<"."<<s[i];
	}

	
	// cout<<str;
	return 0;
}