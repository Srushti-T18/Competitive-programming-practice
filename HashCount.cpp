// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.
#include <bits/stdc++.h>
using namespace std;

int hashcount(vector<int>&a){
    int n = a.size();
    int maxi = a[0];
    for(int i = 0; i<n; i++){
        maxi = max(maxi, a[i]);
    }
    vector<int> hash(maxi+1, 0);
    for(int i = 0; i<n; i++){
        hash[a[i]]++;
    }
    for(int i = 0; i<n; i++){
        if(hash[a[i]]==1) return a[i];
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int count = hashcount(a);
    cout << count << endl;
    return 0;
}
