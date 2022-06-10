#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        string col;
        cin >> col;
        int count=0;
        for (int i = 0; i < 6; i++)
        {
            if(col[i]=='R'){
                for (int j = 0; j < i; j++)
                {
                    if(col[j]=='r'){
                        count++;
                        break;
                    }
                }  
            }
            if(col[i]=='G'){
                for (int j = 0; j < i; j++)
                {
                    if(col[j]=='g'){
                        count++;
                        break;
                    }
                }  
            }
            if(col[i]=='B'){
                for (int j = 0; j < i; j++)
                {
                    if(col[j]=='b'){
                        count++;
                        break;
                    }
                }  
            }
        }
        if(count==3)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}