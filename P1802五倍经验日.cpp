#include<iostream>
#include<algorithm>
#define maxn 1000+5

using namespace std;

typedef long long ll;
int lose[maxn],win[maxn],use[maxn];
ll dp[maxn][maxn];
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>lose[i]>>win[i]>>use[i];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            if(use[i]>j)
            dp[i][j]=lose[i]+dp[i-1][j];
            else
            {
                dp[i][j]=max(dp[i-1][j]+lose[i],dp[i-1][j-use[i]]+win[i]);
            }     
        }
    }
    cout<<dp[n][x]*5<<endl;   
    
}