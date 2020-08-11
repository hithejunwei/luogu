#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
string s;
string h = "";
int w;
int l;

int main()
{

    while (cin >> h)
    {
        if (h[h.length() - 1] != 'E')
            s = s + h;
        else
        {
            s = s + h;
            break;
        }
    }
    int flag = 1;
    int i = 0;
    // cout<<s<<endl;
    while (flag != -1)
    {
        l = 0;
        w = 0;
        for (int j = 0; j < 999999 && flag != -1; j++)
        {
            if (s[i] == 'W')
                w++;
            else if (s[i] == 'L')
                l++;
            else if (s[i] == 'E')
            {
                flag = -1;
            }
            if (l >= 11 || w >= 11)
            {
                if (l - w >= 2 || w - l >= 2)
                {
                    i++;
                    break;
                }
            }
            i++;
        }
        cout << w << ":" << l << endl;
    }

    cout << endl;

    flag = 1;
    i = 0;
    while (flag != -1)
    {
        l = 0;
        w = 0;
        for (int j = 0; j < 999999 && flag != -1; j++)
        {
            if (s[i] == 'W')
                w++;
            else if (s[i] == 'L')
                l++;
            else if (s[i] == 'E')
            {
                flag = -1;
            }

            if (l >= 21 || w >= 21)
            {
                if (l - w >= 2 || w - l >= 2)
                {   i++;
                    break;
                }
            }
            i++;
        }
        cout << w << ":" << l << endl;
    }
}