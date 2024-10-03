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
    ll a,b,c,to,tt;
    cin >> a;
    bool chk=true;
    if(a==2 || a==3) cout << "YES" << endl;
    else if(a==1 || a%2==0 || a%3==0) cout << "NO" << endl;
    else
    {
        for (ll i=5; i<=sqrt(a); i++)
        {
            if(a%i==0)
            {
                chk=false;
                break;
            }
        }
        if(chk==true)
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
