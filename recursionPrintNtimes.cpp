#include <bits/stdc++.h>
using namespace std;

void printname(string name, int count, int n){
    if(count == n) return;
    cout << name << endl;
    printname(name, count+1, n);
}

int main(){
    int n; string name;
    cin >> n >> name;
    printname(name, 0, n);
    return 0;
}
