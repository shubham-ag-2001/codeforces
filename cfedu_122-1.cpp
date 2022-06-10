#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n%7==0)
        {
            cout << n << endl;
        }
        else{
            int rem = n%7;
            int a = n%10;
            if (a < rem )
            {
                n = n + (7-rem);
                cout << n << endl;
            }
            else{
                n = n - rem;
                cout << n << endl;
            }
        } 
    }
    return 0;
}