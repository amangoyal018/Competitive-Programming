#include <bits/stdc++.h>
using namespace std;
int FindSecondLargestElement( int n, vector<vector<int>> vx, int k)
{
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> v1;
        for (int j = 0; j < n; j++)
        {
            
            v1.push_back(vx[i][j]);
        }
        v.push_back(v1);
    }
    int count = 0;
    for (int i = 0; i < n / 2; i++)
    {
        vector<int> a = v[i];
        vector<int> b = v[n - 1 - i];
        reverse(b.begin(), b.end());

        for (int j = 0; j < n; j++)
        {
            if (a[j] != b[j])
            {

                count++;
            }
        }
    }
    if(n&1){

        int count1=0;
        vector<int> a = v[n/2];
        vector<int> b = v[n/2];
        reverse(b.begin(), b.end());
        

        for (int j = 0; j < n; j++)
        {
            if (a[j] != b[j])
            {

                count1++;
            }
        }
        count1/=2;
        count+=count1;
    
    }
    if (n == 1)
    {
        return 1;
    }

    if (count > k)
    {
        return -1;
    }
    else
    {
        if (count == k)
        {
            return 1;
        }
        else
        {
            int rem = k - count;
            if (rem % 2 == 0 or n % 2 != 0)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
    
}
int Brute_solution( int n,vector<vector<int>> vx, int k)
{
    
    int min = 0;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        vector<int> v1;
        for (int j = 0; j < n; j++)
        {
            
            v1.push_back(vx[i][j]);
        }
        a.push_back(v1);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            min += a[i][j] != a[n - 1 - i][n - 1 - j];
        }
    }
    min /= 2;
    
    if (k >= min && (n % 2 == 1 || (k - min) % 2 == 0)) {
        return 1;
    } else {
        return -1;
    }
    
}
int main()
{

    srand(time(NULL));
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 1;
    while (count <= 10000)
    {

        int n = rand() %10 +1;
        int k = rand() % 10;
        int arr[n][n];
        vector<vector<int>> vx;
        for (int i = 0; i < n; i++)
        {
            vector<int> v1;
            for (int j = 0; j < n; j++)
            {
                
                v1.push_back(rand() % 2);
            }
            vx.push_back(v1);
        }
        int myans = FindSecondLargestElement( n,vx, k);
        int correctans = Brute_solution(n,vx, k);
        if (correctans != myans)
        {
            cout << n << endl;
            cout << k << endl;
            for (int i = 0; i < n; i++)
            {
                for(int j=0;j<n;j++){

                    cout << vx[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        count++;
    }
}