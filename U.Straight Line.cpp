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
        ll a,b,c,d,e,f;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;
        ll p1=a*d + c*f + e*b;
        ll p2=b*c + d*e + f*a;
        double an=0.5 * abs(p1-p2);
        if(an==0)
        {
           cout << "YES" << endl;
        }
        else
        {
           cout << "NO" << endl;
        }
    //}
}
