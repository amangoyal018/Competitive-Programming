#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
const int mod = 1e9 + 1;
#define vi vector < int >
#define vll vector<long long int>
#define f(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin() , x.end()
#define pb push_back
int gcd(int x, int y) {return y == 0 ? x : gcd(y, x % y);}

bool isValid(int x, int y, int n, int m){
	if(x < 0 or x >= n)return false;
	if(y < 0 or y >= m)return false;
	return true;
}
int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	return (n * factorial(n - 1)) % mod;
}
int diffelements(string s){
    int len=s.length();
    unordered_set<char> set1;
    for(int i=0;i<len;i++){
        set1.insert(s[i]);
    }
    return set1.size();
}
bool sortbysec(const pair<int,int> &a,
            const pair<int,int> &b)
{
    return (a.second < b.second);
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        if(m>n){
            return findMedianSortedArrays(nums2,nums1);
        }

        cout<<m<<"\n";

        // int low = 0;
        // int high = m;

        // double median;

        // while(low<=high){
        //     int mid1 = (low+high)/2;
        //     int mid2 = (m+n+1)/2 - mid1;

        //     int l1 = (mid1-1>=0)?nums1[mid1-1]:INT_MIN;
        //     int l2 = (mid2-1>=0)?nums2[mid2-1]:INT_MIN;

        //     int r1 = (mid1<m)?nums1[mid1]:INT_MAX;
        //     int r2 = (mid2<n)?nums2[mid2]:INT_MAX;

        //     if(l1>r2){
        //         high = mid1 - 1;
        //     }else if(l2>r1){
        //         low = mid1 + 1;
        //     }else{
        //         if((m+n)%2 == 0){
        //             double e1 = max(l1,l2);
        //             double e2 = min(r1,r2);
        //             return (e1+e2)/2;
        //         }else{
        //             double e1 = max(l1,l2);
        //             return e1;
        //         }
        //     }
        // }
        return 0;





    }



//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    vector<int> v1={2};
    vector<int> v2={};

    cout<<findMedianSortedArrays(v1,v2);
    
    
	
	
    
    

    
    
    



}