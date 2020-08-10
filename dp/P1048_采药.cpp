#include<iostream>
#include<algorithm>
#include<cstring>
#define maxn 105
using namespace std;

int dp[maxn*10];
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

   for(int i=1;i<=M;i++)
   {
       for(int j=T;j>=w[i];j--)
       {
            dp[j]=max(dp[j],dp[j-w[i]]+c[i]);
       }
   }
    cout<<dp[T]<<endl;
}