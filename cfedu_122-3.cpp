#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long double charhealth, charattack, monshealth, monsattack, coins, attak, health;
        cin >> charhealth >> charattack >> monshealth >> monsattack >> coins >> attak >> health;
        long double killchar = ceil(charhealth / monsattack);
        long double killmons = ceil(monshealth / charattack);
        int ans = 0;
        if (killchar >= killmons)
        {
            cout << "YES\n";
        }
        else if(coins)
        {
            for (int i = 0; i <= coins; i++)
            {
                charattack = charattack + i * attak;
                charhealth = charhealth + (coins - i) * health;
                killchar = ceil(charhealth / monsattack);
                killmons = ceil(monshealth / charattack);
                if (killchar >= killmons)
                {
                    cout << "YES\n";
                    ans++;
                    break;
                }
            }
            if (!ans)
            {
                cout << "NO\n";
            }
        }
        else
        {
        cout << "NO\n";
        }
    }
    return 0;
}