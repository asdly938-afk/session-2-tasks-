#include<iostream>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a>=0 && a<=20 && b>=0 && b<=20 && c>=0 && c<=20)
        {
        if (a+b==c || a+c==b || b+c==a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    }
}
