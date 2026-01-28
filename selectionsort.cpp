#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<n-1; i++){
        int mini = i;
        for(int j = i+1; j<n; j++){
            if(a[j]<a[mini])
            mini = j;
            int temp = a[mini];
            a[mini] = a[i];
            a[i] = temp;
        }
    }
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
