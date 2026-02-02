#include <bits/stdc++.h>
using namespace std;

int unique(vector<int>&a, int nums){
     sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        for(int x: a){
            cout << x << " ";
        }
        cout << endl;
        cout << "Count: " << a.size() << endl;
}
int main(){
    int nums; cin >> nums;
    vector<int>a(nums);
    for(int i = 0; i<nums; i++){
        cin >> a[i];
    }
    unique(a, nums);
    return 0;
}

