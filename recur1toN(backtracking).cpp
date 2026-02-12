#include <bits/stdc++.h>
using namespace std;

void print1toN(int current, int n){
    if(current>n) return;
    print1toN(current+1, n);
    cout << current << endl;
}

int main(){
    int n; ;
    cin >> n;
    print1toN(1, n);
    return 0;
}
