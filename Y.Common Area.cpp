/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int finding(char ch)
{
    return ch-'A'+1;
}
int posi(int h)
{
    return h+'a'-1;
}
bool deco(pair <int,int>&a,pair<int,int>&b)
{
    return a.second>b.second;
}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    ll a,b,c,d,e,f;
    cin >> a;
    for(int j=1; j<=a; j++)
    {
        cin >> b;
        ll x1=-100000,y1=-100000;
        ll x2=100000,y2=100000;
        for(int i=1; i<=b; i++)
        {
            cin >> c >> d >> e >> f;
            x1=max(x1,c);
            y1=max(y1,d);
            x2=min(x2,e);
            y2=min(y2,f);
        }
        if(x2>x1 && y2>y1)
        {
            cout << "Case #" << j <<": " << (x2-x1)*(y2-y1) << endl;
        }
        else
        {
            cout << "Case #" << j << ": 0" << endl;
        }
    }
    //}
}
