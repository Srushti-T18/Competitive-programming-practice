#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        if(a*2>=b){
            if(n%2==0) cout << (n/2)*b << endl;
            else cout << a+(n/2)*b << endl;
        }
        else{
            cout << n*a << endl;
        }
    }
    return 0;
}
