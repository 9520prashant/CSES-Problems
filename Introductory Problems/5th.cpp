#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    if(n == 2 || n == 3){cout << "NO SOLUTION"; return 0;}


    int arr[n];

    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            cout << arr[i] << " ";
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     if(n == 2 || n == 3){cout << "NO SOLUTION"; return 0;}

//     int odd = 1, even = 2;

//     while(even <= n){
//         cout << even << " ";
//         even += 2;
//     }
//     while(odd <= n){
//         cout << odd << " ";
//         odd += 2;
//     }

//     return 0;
// }