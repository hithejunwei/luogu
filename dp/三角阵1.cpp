#include<iostream>
#include<algorithm>
using namespace std;
int dp[1000+5][1000+5],w[1000+5][1000+5];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
		{
			cin>>w[i][j];
			if(i==n)
			dp[i][j]=w[i][j];	
		}
	
	for(int i=n-1;i>=1;i--)
		for(int j=1;j<=i;j++){
			{
				dp[i][j]=max(w[i][j]+dp[i+1][j],w[i][j]+dp[i+1][j+1]);		
			}
		}
		cout<<dp[1][1]<<endl; 
 } 
