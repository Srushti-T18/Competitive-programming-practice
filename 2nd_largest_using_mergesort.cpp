#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&a, int l, int mid, int r){
    vector <int> temp;
    int i = l;
    int j = mid+1;
    while(i<=mid && j<=r){
        if(a[i]<a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(a[i]);
        i++;
    }
    while(j<=r){
        temp.push_back(a[j]);
        j++;
    }
    for(int k = 0; k<temp.size(); k++){
        a[l+k] = temp[k];
    }
}
void mergesort(vector<int>&a, int l, int r){
    if(l>=r) return;
    int mid = (l+(r-1))/2;
    mergesort(a, l, mid);
    mergesort(a, mid+1, r);
    merge(a, l, mid, r);
}
int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    mergesort(a, 0, n-1);
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Second smallest number is: " << a[1] << endl;
    cout << "Second largest number is: " << a[n-2] << endl;
    return 0;
}
