#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = 1, count =0;
    char strsub = 'A';
    for(auto i:s){
        if(i == strsub){
            count++;
            ans = max(ans, count);
        }else{
            strsub = i;
            count = 1;
        }
    }
    cout << ans << endl;
    return 0;
}