/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sum(ll n,ll m)
{
    return ((m-n+1)*(n+m))/2;
}
ll evsum(ll n,ll m)
{
    if(n%2==1) n++;
    if(m%2==1) m--;
    return (n*(2-n) + m*(2+m))/4;
}
ll odsum(ll n,ll m)
{
    if(n%2==0) n++;
    if(m%2==0) m--;
    return pow((m + (m%2))/2,2) - pow((n - (n%2))/2,2);
}
int main()
{
    int a,b;
    cin >> a >> b;
    if(a>b)
    {
        swap(a,b);
    }
    cout << sum(a,b) << endl;
    cout << evsum(a,b) << endl;
    cout << odsum(a,b) << endl;
}
