#include <bits/stdc++.h>
using namespace std;

int search(int n, int a[], int num){
    for(int i = 0; i<n; i++){
	    if(a[i]==num) return i;
    }
	    return -1;
}

int main() {
	int n;
	cin >> n ;
	int a[n];
	for(int i = 0; i<n; i++){
	    cin >> a[i];
	}
	int num;
	cin >> num;
	int val = search(n, a, num);
	cout << val << endl;
	return 0;

}
