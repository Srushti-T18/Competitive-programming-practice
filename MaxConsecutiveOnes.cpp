#include <bits/stdc++.h>
using namespace std;

int consec(vector<int>&a){
    int count = 0;
    int maxicount = 0;
    for(int i = 0; i<a.size(); i++){
        if(a[i] == 1){
            count++;
        }
        else{
            count = 0;
        }
        maxicount = max(maxicount, count);
    }
    return maxicount;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int count = consec(a);
    cout << count << endl;
    return 0;
}
