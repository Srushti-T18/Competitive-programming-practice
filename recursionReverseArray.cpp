#include <bits/stdc++.h>
using namespace std;

void reversearr(vector<int>&a){
    int p = 0;
    int q = a.size()-1;
    while(p<q){
        swap(a[p], a[q]);
        p++;
        q--;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    reversearr(a);
    for(int x: a){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
