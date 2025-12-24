#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int original = n;
    cin >> n;
    if(n==0) return 1;
    int count = 0;
    while(n!=0){
        count++;
        n=n/10;
    }
    n=original;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        sum += pow(digit, count);
        n = n/10;
    }
    if(sum==original){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}

    
