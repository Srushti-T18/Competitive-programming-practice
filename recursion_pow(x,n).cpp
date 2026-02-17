#include <bits/stdc++.h>
using namespace std;

double pow(double x, long long n){
    if(n==0) return 1.0;
    if(n==1) return x;
    if(n%2==0) return pow(x*x, n/2);
    else return x*pow(x, n-1);
}

int main(){
    double x; long long n;
    cin >> x >> n;
    if(n<0){
        cout << 1/pow(x, -1*n) << endl;
    }
    else{
    cout << pow(x,n) << endl;
    }
    return 0;
}
