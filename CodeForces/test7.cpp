#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;
using namespace __gnu_pbds;
// #define bug(...) _f(#VA_ARGS, __VA_ARGS_)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#define ln "\n"
#define mp make_pair
#define ie insert
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
typedef long double ld;
typedef pair<ll, ll> p64;
typedef vector<ll> v64;
typedef vector<vector<ll>> vv64;
typedef vector<p64> vp64;
typedef set<ll> s64;
typedef set<p64> sp64;
typedef map<ll, ll> m64;
const int MOD = 1000000007;
const int INF = 2e18;
double eps = 1e-12;
#define dbg(a) cout << a << ln;
#define dbg2(a) cout << a << ' ';
#define forn(i, n) for (ll i = 0; i < n; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define minheap priority_queue<int, vector<int>, greater<int>>;
#define maxheap priority_queue<int>;

#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define al(arr, n) arr, arr + n
#define sz(x) ((ll)(x).size())
using str = string;             // yay python!
const double pi = 3.1415926536; // 10
void printvector(v64 &v)
{
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << ln;
}

void solve()
{
    int n, k, e, r;
    cin >> n >> k >> e >> r;
    vv64 adj(n + 1);

    v64 vis(n + 1, 0);
    v64 dis(n + 1, 0);
    int x = k;
    queue<p64> q;
    while (x--)
    {
        int i;
        cin >> i;
        q.push({i, 1});
        vis[i] = 1;
        dis[i] = 1;
    }
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    // for (auto &i : v)
    // {
    //     printvector(i);
    // }
    while (!q.empty())
    {
        ll curr = q.front().first;
        ll dist = q.front().second;
        q.pop();
        if (dist >= r)
            continue;
        for (auto v : adj[curr])
        {
            if (!vis[v])
            {
                vis[v] = true;
                q.push({v, dist + 1});
            }
        }
    }
    v64 ans;
    forsn(i, 1, n + 1)
    {
        if (vis[i] == 0)
        {
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;

    for (auto &i : ans)
    {
        dbg2(i);
    }
    cout << ln;
}

int32_t main()
{
    fast_cin();
    clock_t z = clock();
    ll t = 1;
    // cin >> t;
    // freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    for (int it = 1; it <= t; it++)
    {
        solve();
    }

    // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}