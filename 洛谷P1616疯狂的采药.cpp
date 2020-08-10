#include <iostream>
#include <algorithm>
#define maxn 10000 + 5

using namespace std;
int w[maxn], c[maxn];
int dp[10000000 + 5];
int main()
{
    int t, m;
    cin >> t >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> w[i] >> c[i];
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = w[i]; j <= t; j++)
        {
            dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
        }
    }
    cout << dp[t] << endl;
}