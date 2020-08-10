#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 9999999
int d[105][105];
int maxd=-1;
int mind=maxn;
int max_r,max_c;
int min_r,min_c;
//int m1,m2,m3,m4;
int m,n;
int dp(int i,int j){
	if(i==min_r&&j==min_c)
	{
		return 1;
	}
//	m1=m2=m3=m4=-1;
//	if(d[i-1][j]<=d[i][j])
//		m1=dp(i-1,j)+1;	
//	if(d[i+1][j]<=d[i][j])
//		m2=dp(i+1,j)+1;	
//	if(d[i][j-1]<=d[i][j])
//		m3=dp(i,j-1)+1;	
//	if(d[i][j+1]<=d[i][j])
//		m4=dp(i,j+1)+1;
//return max(m1,max(m2,max(m3,m4)));
	int maxm = 0;
	if (d[i][j]>d[i-1][j] && maxm<dp(i-1,j)) 
		maxm = dp(i-1,j);
	if (d[i][j]>d[i][j-1] && maxm<dp(i,j-1))
		maxm = dp(i,j-1);
	if(  d[i][j]>d[i+1][j] && maxm<dp(i+1,j))
		maxm = dp(i+1,j);
	if( d[i][j]>d[i][j+1] && maxm<dp(i,j+1))
		maxm = dp(i,j+1);
	return maxm+1;
	
	

}
int main(){

	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>d[i][j];
			if(d[i][j]>maxd)
			{
				maxd=d[i][j];
				max_r=i;
				max_c=j;
			}
			if(d[i][j]<mind)
			{
				mind=d[i][j];
				min_r=i;
				min_c=j;
			}
		}
	}
	for(int i=0;i<=m+1;i++)
	{
		d[i][0]=maxn;
		d[i][n+1]=maxn;
	}
	for(int j=0;j<=n+1;j++)
	{
		d[0][j]=maxn;
		d[m+1][j]=maxn;
	}

		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
		{
			cout<<dp(i,j)<<" ";
		}
		cout<<endl;

		}

}
