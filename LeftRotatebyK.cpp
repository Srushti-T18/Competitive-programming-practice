#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>&a, int k){
    int n = a.size();
    k = k%n;
    reverse(a.begin(), a.begin()+k);
    reverse(a.begin()+k, a.end());
    reverse(a.begin(), a.end());
}

int main(){
    int n, k; cin >> n >> k;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    rotate(a, k);
    for(int x: a){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
