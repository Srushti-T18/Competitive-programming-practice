#include <bits/stdc++.h>
using namespace std;

string exists(vector<int>&a, int target){
    int n = a.size();
    vector<pair<int, int>> nwi;
    for(int i = 0; i<n; i++){
        nwi.push_back({a[i], i});
    }
    sort(nwi.begin(), nwi.end());
    int left = 0, right = n-1;
    while(left<right){
        int sum = nwi[left].first + nwi[right].first;
        if(sum == target){
            return "YES"; 
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return "NO";
}
vector<int>indices(vector<int>&a, int target){
    int n = a.size();
    vector<pair<int, int>> nwi;
    for(int i = 0; i<n; i++){
        nwi.push_back({a[i], i});
    }
    sort(nwi.begin(), nwi.end());
    int left = 0, right = n-1;
    while(left<right){
        int sum = nwi[left].first + nwi[right].first;
        if(sum == target){
            return {nwi[left].second, nwi[right].second};
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return {-1, -1};
}

int main(){
    int n, target;
    cin >> n >> target;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    cout << exists(a, target) << endl;
    vector<int> res = indices(a, target);
    cout << "[ " << res[0] << ", " << res[1] << " ]" << endl;
    return 0;
}
