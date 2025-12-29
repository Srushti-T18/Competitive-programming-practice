#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
            int a = n%10;
            int b = n/10;
            cout << a+b << endl;
    }
    return 0;
}
