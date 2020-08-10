#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

int hh=1000000000+7;
typedef long long ll;
string s[100005];
ll dp[100005];
int main()
{
	int T;
	int n=0;
	cin>>T;
	while(T--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>s[i];
		}
		dp[0]=1,dp[1]=1;
		for(int i=2;i<=n;i++)
		{
			if(s[i]==s[i-1])
			dp[i]=dp[i-1];
			else
			{dp[i]=dp[i-1]+dp[i-2];
			dp[i]=dp[i]%hh;}
		}
		cout<<(dp[n])<<endl;
		memset(dp,0,sizeof(dp));
	}
}
