#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n==3){
            cout << "3 2 1\n1 3 2\n3 1 2\n";
        }
        else{
        for (int i = n; i >0; i--)
        {
            int temp = n;
            for (int j = i; j > 0; j--)
                {
                    cout << j <<" ";
                    temp--;
                }
            for (int k = n; temp > 0; k--)
            {
                cout <<k<<" ";
                temp--;
            }
            cout << endl;
        }
        }
    }
    return 0;
}