#include <iostream>
#include <algorithm>
#include <cstring>
#define maxn 100000 + 5
using namespace std;
typedef struct
{
    int order;
    string name;
    int flag;

} people;
people p[maxn];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        p[i].order = i;
        cin >> p[i].flag;
        cin >> p[i].name;
    }
    int temp = 0;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        if (p[temp].flag == 0)
        {
            if (a == 1)
                temp = (temp + b) % n;
            else
            {
                temp = (temp - b) % n;
            }
            if (temp < 0)
                temp = temp + n;
        }
        else
        {
            if (a == 0)
                temp = (temp + b) % n;
            else
            {
                temp = (temp - b) % n;
            }
            if (temp < 0)
                temp = temp + n;
        }
    }
    cout << p[temp].name << endl;
}
