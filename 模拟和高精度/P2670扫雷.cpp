#include<iostream>
#include<algorithm>

using namespace std;

int c[105][105];
int dir[3]={0,1,-1};

int main(){
    int n,m;
    cin>>n>>m;
    char cha;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>cha;
            if(cha=='*')
            c[i][j]=-1; //有地雷   
        }
    }
        for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(c[i][j]==-1) 
            cout<<'*';
            else
            {
                int num=0;
                for(int ii=0;ii<3;ii++)
                {
                    for(int jj=0;jj<3;jj++)
                    {
                        if(ii!=0||jj!=0)
                        {
                            if(c[i+dir[ii]][j+dir[jj]]==-1)
                            num++;
                        }
                    }
                }
                cout<<num;
            }
            
        }
        cout<<endl;
    }
}