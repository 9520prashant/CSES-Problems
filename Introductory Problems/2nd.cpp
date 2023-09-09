#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll  n;
    cin >> n;
    ll nSum = n*(n+1)/2;
    n--;
    ll sum=0;
    while(n --){
        ll num;
        cin >> num;
        sum+=num;
    }
    
    cout << nSum-sum << " ";
    return 0;
}