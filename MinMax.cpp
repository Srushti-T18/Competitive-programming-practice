#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int mn = a[0];
    int mx = a[0];
    for(int i = 1; i<n; i++){
        if(a[i]<mn) mn = a[i];
        if(a[i]>mx) mx = a[i];
    }
    cout << "maximum is: " << mx << endl;
    cout << "minimum is: " << mn << endl;
    return 0;
}
