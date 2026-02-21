#include <bits/stdc++.h>
using namespace std;

string exists(vector<int>&a, int target){
    int n = a.size();
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i]+a[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}
vector<int>indices(vector<int>&a, int target){
    int n = a.size();
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i]+a[j]==target){
                return {i, j};
            }
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
