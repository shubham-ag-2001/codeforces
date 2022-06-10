#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string repeat;
        string notrepeat;
        int a=0, b=0;
        int l = s.length();     
        for(int i = 0; i < s.length(); i++){
        if(count(s.begin(), s.end(), s[i]) == 2) repeat.push_back(s[i]);
        else notrepeat.push_back(s[i]);
        }
        // if ((2*a + b) != l)
        // {
        //     notrepeat.push_back(s[l-1]);
        // }
        // if (a > 0)
        // {
        cout << repeat << notrepeat <<endl;
        // }
        // else{
        //     cout << s << endl;
        // }
    }
    return 0;
}