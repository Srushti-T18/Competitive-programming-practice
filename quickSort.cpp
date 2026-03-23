#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&a, int low, int high){
    int pivot = a[high];
    int i = low-1;
    for(int j = low; j<high; j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    return i+1;
}
void quickSort(vector<int>&a, int low, int high){
    if(low<high){
    int pivotind = partition(a, low, high);
    quickSort(a, low, pivotind-1);
    quickSort(a, pivotind+1, high);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    quickSort(a, 0, a.size()-1);
    for(int x: a){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
