#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long rev = 0;
    while(n!=0){
        int lastdigit = n%10;
        rev = (rev*10)+lastdigit;
        n=n/10;
    }
    if(n>INT_MAX || n<INT_MIN)
    cout << "0" << endl;
    else{
        cout << rev << endl;
    }
    return 0;
}
