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
ll sum(ll a)
{
   return a*(a+1) / 2;
}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    ll a,b;
    cin >> a >> b;
    //ll maxi=max(a,b);
    //ll mini=min(a,b);
    ll c=a,d=b;
    while(d!=0)
    {
       ll sw=d;
       d=c%d;
       c=sw;
    }
    cout << c << " " << (a/c)*b << endl;
    //}
}
