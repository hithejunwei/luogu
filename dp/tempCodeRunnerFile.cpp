#include<iostream>
#include<algorithm>
#include<cstring>
#define maxn 105
using namespace std;

int dp[maxn][maxn];
int w[maxn];
int c[maxn];

int main()
{
    int T,M;
    cin>>T>>M;
    for(int i=1;i<=M;i++)
    {
        cin>>w[i]>>c[i];
    }
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=M;i++)
    {
        for(int j=1;j<=T;j++)
        {
            if(w[i]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+c[i]);
            }
            
        }
    }
    cout<<dp[M][T]<<endl;

}