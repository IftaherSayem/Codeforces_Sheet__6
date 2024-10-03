#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    if(n>0)
    {
        while(n%2==0)
        {
            n=n/2;
        }
        if (n==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
