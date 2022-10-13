#include <iostream>
using namespace std;

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
	int n;
    cin>>n;
    while (1){
        if(n==42){
            break;
        }else{
            cout<<n<<endl;

            cin>>n;
            continue;
        }
    }

	return 0;
}