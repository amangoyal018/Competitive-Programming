#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
#define ll long long int 
const int mod = 1e9 + 7;
#define vi vector < int >
#define vll vector<long long int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long int>>
#define f(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin() , x.end()
#define pb push_back
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define FIND(x, y) binary_search(all(x), y)
int gcd(int x, int y) {return y == 0 ? x : gcd(y, x % y);}
int lcm(int x, int y) {return x / gcd(x, y) * y;}

bool isValid(int x, int y, int n, int m){
    if(x < 0 or x >= n)return false;
    if(y < 0 or y >= m)return false;
    return true;
}
int factorial(int n)
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
bool isPrime(int n) 
{   
    if (n < 2)
        return false;
    if (n <= 3) 
        return true; 
    if (!(n % 2) or !(n % 3)) 
        return false; 
    for (int i = 5; i * i <= n; i += 6) 
        if (!(n % i) or !(n % (i + 2))) 
            return false;
    return true; 
}
bool ispow2(int x){return (x ? !(x & (x - 1)) : 0);} 

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
struct VectorHasher {
    int operator()(const vector<int> &V) const {
        int hash = V.size();
        for(auto &i : V) {
            hash ^= i + 0x9e3779b9 + (hash << 6) + (hash >> 2);
        }
        return hash;
    }
}; 



void solve(){
    ll n;
    cin >> n;
    vll v1(n),v2(n),v3(n);
    ll sum = 0;
    f(i,0,n){
        cin>>v1[i];
        sum+=v1[i];
    }
    f(i,0,n){
        cin>>v2[i];
    }
    f(i,0,n){
        cin>>v3[i];
    }

    vi res(6);

    bool st1;
    bool st2;
    bool st3;
    ll temp;
    int index;

    st1 = false;
    st2 = false;
    st3 = false;
    index = 0;
    temp = 0;


    res[0] = 1;
    for(index =0;index<n;index++){
        temp += v1[index];
        res[1] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st1 = true;
            break;
        }
    }
    temp = 0;
    res[2] = index + 1;
    for(;index<n;index++){
        temp+=v2[index];
        res[3] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st2 = true;
            break;
        }
    }
    temp = 0;
    res[4] = index + 1;
    for(;index<n;index++){
        temp+=v3[index];
        res[5] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st3 = true;
            break;
        }
    }
    if(st1 and st2 and st3){
        f(i,0,5){
            cout << res[i] << " ";
        }
        cout << n << "\n";
        return;
    }

    //2
    st1 = false;
    st2 = false;
    st3 = false;
    index = 0;
    temp = 0;


    res[0] = 1;
    for(index =0;index<n;index++){
        temp += v1[index];
        res[1] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st1 = true;
            break;
        }
    }
    temp = 0;
    res[2] = index + 1;
    for(;index<n;index++){
        temp+=v3[index];
        res[3] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st2 = true;
            break;
        }
    }
    temp = 0;
    res[4] = index + 1;
    for(;index<n;index++){
        temp+=v2[index];
        res[5] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st3 = true;
            break;
        }
    }
    if(st1 and st2 and st3){
        res[5]= n;
        cout << res[0] << " " << res[1] << " " << res[4] << " " << res[5] << " " << res[2] << " " << res[3] <<"\n";
        return;
    }

    //3
    st1 = false;
    st2 = false;
    st3 = false;
    index = 0;
    temp = 0;


    res[0] = 1;
    for(index =0;index<n;index++){
        temp += v2[index];
        res[1] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st1 = true;
            break;
        }
    }
    temp = 0;
    res[2] = index + 1;
    for(;index<n;index++){
        temp+=v1[index];
        res[3] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st2 = true;
            break;
        }
    }
    temp = 0;
    res[4] = index + 1;
    for(;index<n;index++){
        temp+=v3[index];
        res[5] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st3 = true;
            break;
        }
    }
    if(st1 and st2 and st3){
        res[5]= n;
        cout << res[2] << " " << res[3] << " " << res[0] << " " << res[1] << " " << res[4] << " " << res[5] <<"\n";
        return;
    }

    //4
    st1 = false;
    st2 = false;
    st3 = false;
    index = 0;
    temp = 0;


    res[0] = 1;
    for(index =0;index<n;index++){
        temp += v2[index];
        res[1] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st1 = true;
            break;
        }
    }
    temp = 0;
    res[2] = index + 1;
    for(;index<n;index++){
        temp+=v3[index];
        res[3] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st2 = true;
            break;
        }
    }
    temp = 0;
    res[4] = index + 1;
    for(;index<n;index++){
        temp+=v1[index];
        res[5] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st3 = true;
            break;
        }
    }
    if(st1 and st2 and st3){
        res[5]= n;
        cout << res[4] << " " << res[5] << " " << res[0] << " " << res[1] << " " << res[2] << " " << res[3] <<"\n";
        return;
    }

    //5
    st1 = false;
    st2 = false;
    st3 = false;
    index = 0;
    temp = 0;


    res[0] = 1;
    for(index =0;index<n;index++){
        temp += v3[index];
        res[1] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st1 = true;
            break;
        }
    }
    temp = 0;
    res[2] = index + 1;
    for(;index<n;index++){
        temp+=v1[index];
        res[3] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st2 = true;
            break;
        }
    }
    temp = 0;
    res[4] = index + 1;
    for(;index<n;index++){
        temp+=v2[index];
        res[5] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st3 = true;
            break;
        }
    }
    if(st1 and st2 and st3){
        res[5]= n;
        cout << res[2] << " " << res[3] << " " << res[4] << " " << res[5] << " " << res[0] << " " << res[1] <<"\n";
        return;
    }

    //6
    st1 = false;
    st2 = false;
    st3 = false;
    index = 0;
    temp = 0;


    res[0] = 1;
    for(index =0;index<n;index++){
        temp += v3[index];
        res[1] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st1 = true;
            break;
        }
    }
    temp = 0;
    res[2] = index + 1;
    for(;index<n;index++){
        temp+=v2[index];
        res[3] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st2 = true;
            break;
        }
    }
    temp = 0;
    res[4] = index + 1;
    for(;index<n;index++){
        temp+=v1[index];
        res[5] = index + 1;
        if(temp >=( sum + 2 )/3){
            index++;
            st3 = true;
            break;
        }
    }
    if(st1 and st2 and st3){
        res[5]= n;
        cout << res[4] << " " << res[5] << " " << res[2] << " " << res[3] << " " << res[0] << " " << res[1] <<"\n";
        return;
    }
    cout << -1 << "\n";
   
    
}
//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    auto start = high_resolution_clock::now();
    ll t;
    cin>>t;
    // t=1;
    while(t--){

        solve();
    }
    auto time =  duration_cast<microseconds>(high_resolution_clock::now() - start).count() / 1000;
    cerr << "Time: " << time << " ms!" << endl;
    
}