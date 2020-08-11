#include <iostream>
#include <algorithm>

using namespace std;
int w[25][25];
int c[25];
int dp[25];
int ww[25];
// void dfs(int m, int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//             if (w[i][j] == 1)
//             {
//                 dfs(m,n)=
//             }
//             else
//             {
//             }
//     }
// }
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cin >> w[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        dp[i]=c[i];//代表从i出发挖到的最多地雷数
    }
    for (int i = n-1; i >=1; i--)
    {   
        
        int maxnum = dp[i];
        int jj=-1;
        for (int j = n; j >=i+1; j--)
        {
            if (w[i][j] == 1)
            {
                if (dp[j] + c[i] > maxnum)
                {
                    maxnum = dp[j] + c[i];
                    jj=j;
                }
            }
        }
        dp[i]=maxnum;
        if(jj!=-1)
        {
            ww[i]=jj;
        }
    }
    int maxnum1=-1;
    int ii=-1;
    for(int i=1;i<n;i++)
    {
        if(dp[i]>maxnum1)
            {maxnum1=dp[i];
            ii=i;}
    }
    int flag=0;
    cout<<ii<<" ";
    while(flag!=1)
    {
        int g=ww[ii];
        if(g!=0)
        {
            cout<<g<<" ";
        }
        else{
            flag=1;
        }
        ii=g;
    }
    cout<<endl;
    cout<<maxnum1<<endl;
   
}