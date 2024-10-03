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
    ll a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;
    double r1=(sqrt((c-a)*(c-a) + (d-b)*(d-b)))/2;
    double r2=(sqrt((g-e)*(g-e) + (h-f)*(h-f)))/2;
    double rx=(double)(a+c)/2;
    double ry=(double)(b+d)/2;
    double rx1=(double)(e+g)/2;
    double ry1=(double)(f+h)/2;
    double dis=sqrt((rx1-rx)*(rx1-rx) + (ry1-ry)*(ry1-ry));
    if(dis<=r1+r2)
    {
       cout << "YES" << endl;
    }
    else
    {
       cout << "NO" << endl;
    }
    //}
}
