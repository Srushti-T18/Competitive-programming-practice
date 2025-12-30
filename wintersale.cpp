#include <bits/stdc++.h>
using namespace std;
int main(){
    float X, P;
    cin >> X >> P;
    float ogprice = P*100/(100-X);
    cout << fixed << setprecision(2) << ogprice << endl;
    return 0;
}
