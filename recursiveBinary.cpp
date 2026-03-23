#include <bits/stdc++.h>
using namespace std;

int recBin(vector<int>&a, int low, int high, int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(a[mid]==target) return mid;
    else if(target>a[mid])
    return recBin(a, mid+1, high, target);
    else
    return recBin(a, low, mid-1, target);
}
    
    int search(vector<int>&a, int target){
        return recBin(a, 0, a.size()-1, target);
    }

int main(){
    int n, target;
    cin >> n >> target;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int ans= search(a, target);
    if(ans == -1)
    cout << "not found" << endl;
    else
    cout << ans << endl;
    return 0;
}
