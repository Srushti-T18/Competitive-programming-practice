#include <bits/stdc++.h>
using namespace std;

int iter(vector<int>&a, int target){
    int n = a.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==target) return mid;
        else if(target>a[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int main(){
    int n, target;
    cin >> n >> target;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int ans= iter(a, target);
    cout << ans << endl;
    return 0;
}
