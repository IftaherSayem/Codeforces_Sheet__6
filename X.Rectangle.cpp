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
void rec(vector<int> &ar,int n,vector <int> &nw)
{
    if(n<1)
    {
        return;
    }
    else if(n%2==0)
    {
        nw.push_back(ar[n-2]);
    }
    else
    {
        nw.push_back(ar[n-1]);
    }
    rec(ar,n-2,nw);

}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    ll a,b,c,d,e,f,g,h,w,x,y;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    cin >> w;
    ll maxx=max({a,c,e,g});
    ll maxy=max({b,d,f,h});
    ll minix=min({a,c,e,g});
    ll miniy=min({b,d,f,h});
    while(w--)
    {
       cin >> x >> y;
       if(x<=maxx && x>=minix && y<=maxy && y>=miniy)
       {
          cout << "YES" << endl;
       }
       else
       {
          cout << "NO" << endl;
       }
    }
    //}
}
