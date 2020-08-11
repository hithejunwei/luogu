#include <iostream>
#include <string.h>
using namespace std;

int father[10001];
bool flag[10001];
int n;
int n1;
int s;
int a,b;
void init() {
    for (int i = 1; i <= n; ++i) {
        father[i] = i;
    }
}
int get(int x) {
     while(father[x]!=x)
    {
        x=father[x];
    }
    return x;
}
void merge(int x, int y) {
    int xx = get(x);
    int yy = get(y); 
    father[xx] = yy;
}
int main()
{
    while(scanf("%d",&n)!=EOF&&n) 
    { 
        memset(flag,0,sizeof(flag));
        cin>>n1;
        init(); 
        for(int i=1;i<=n1;i++)
        {
            cin>>a>>b;
            merge(a,b);
        }
        for(int i=1;i<=n;i++)
        {
            if(!flag[get(i)])
            {
            	 s=s+1;
                flag[get(i)]=1;
               
            }
        }
        cout<<s-1<<endl;
       	s=0;
    }

}