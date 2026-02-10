#include <bits/stdc++.h>
using namespace std;

int longestsubarr(vector<int>&a, int k){
    int n = a.size();
    int right = 0, left = 0;
    int sum = 0;
    int maxLen = 0;
    while(right<n){
        sum = sum+a[right];

        while(sum>k){
        sum = sum-a[left];
        left++;
    }
    if(sum == k){
        maxLen = max(maxLen, right-left+1);
    }
    right++;
    }
    return maxLen;
} 

int main(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int count = longestsubarr(a, k);
    cout << count << endl;
    return 0;
}
