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

ll dectobin(string s,ll a)
{
    reverse(s.begin(),s.end());
    ll an=0;
    for (int i=0; i<s.length(); i++)
    {
        char ch;
        if(s[i]>='0' && s[i]<='9')
        {
            ch='0';
        }
        else
        {
            ch='A'-10;
        }
        an+=(s[i]-ch)*pow(a,i);
    }
    return an;
}
string oth(string s,ll a)
{
    ll con=stoi(s);
    string an="";
    char cd[36];
    for (int i=0; i<a; i++)
    {
        if(i<10)
        {
            cd[i]=i+'0';
        }
        else
        {
            cd[i]='A'+i-10;
        }
    }
    while(con != 0)
    {
        an += cd[con % a];
        con /= a;
    }
    reverse(an.begin(),an.end());
    return an;
}
int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    //ll n;
    //cin >> n;
    //while(n--)
    //{
    ll a,c;
    string b;
    cin >> a;
    cin >> b >> c;
    if(a==1)
    {
        cout << dectobin(b,c) << endl;
    }
    else
    {
        cout << oth(b,c) << endl;
    }
    //}
}
