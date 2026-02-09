#include <bits/stdc++.h>
using namespace std;

vector<int> findunion(int a1[], int a2[], int a, int b){
    set<int>st;
    for(int i = 0; i<a; i++){
        st.insert(a1[i]);
    }
    for(int i = 0; i<b; i++){
        st.insert(a2[i]);
    }
    vector<int> ans(st.begin(), st.end());
    return ans;
}
int main(){
    int a, b;
    cin >> a >> b;    
    int a1[a], a2[b];
    for(int i = 0; i<a; i++){
        cin >> a1[i];
    }
    for(int i = 0; i<b; i++){
        cin >> a2[i];
    }
    vector<int> res = findunion(a1, a2, a, b);
    for(int x: res){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
