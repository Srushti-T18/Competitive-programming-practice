#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int years = n/365;
    int remaining_days = n%365;
    int months = remaining_days/30;
    int days = remaining_days%30;
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    return 0;
}
