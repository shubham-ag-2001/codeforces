#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int length = s.length();
        int ones=0, zeroes=0;
        for (int i = 0; i < length; i++)
        {
            if (s[i]=='1')
                ones++;
            else
                zeroes++;
        }
        if (ones == zeroes)
        {
            cout << ones-1 << endl;
        }
        else{
            cout << min(ones, zeroes) << endl;
        }
    }
    return 0;
}