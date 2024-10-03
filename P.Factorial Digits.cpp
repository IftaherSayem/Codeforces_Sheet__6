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
    ll a,b;
    cin >> a;
    if(a==0 || a==1) cout << "Number of digits of " << a << "! is 1 "<< endl;
    else
    {
       double co=0;
       for(int i=2;i<=a;i++)
       {
          co+=log10(i);
       }
       int an=ceil(co);
       cout << "Number of digits of " << a << "! is " << an << endl;
    }
    //}
}
