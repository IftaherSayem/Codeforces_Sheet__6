/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(ll n, ll m,ll o)
{
   if(o%3==1)
   {
      return n;
   }
   else if(o%3==2)
   {
      return m;
   }
   else
   {
      return n^m;
   }
}
int main()
{
    ll a,b,c;
    cin >> a >> b >> c;
    cout << solve(a,b,c) << endl;
}
