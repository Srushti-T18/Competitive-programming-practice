#include <bits/stdc++.h>
using namespace std;

int findmissing(vector<int>&a){
    int n = a.size() +1;
    int sum = 0;
    for(int i = 0; i<n-1; i++){
        sum += a[i];
    }
    long long expSum = (n*1LL*(n+1))/2;
    return expSum - sum;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int missing = findmissing(a);
    cout << missing << endl;
    return 0;
}
