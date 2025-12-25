#include <bits/stdc++.h>
using namespace std;
int main(){
    char X;
    cin >> X;
    if(isupper(X)){
        char lower = tolower(X);
        cout << lower << endl;
    }
    else if(islower(X)){
        char upper = toupper(X);
        cout << upper << endl;
    }
    else{
        cout << "invalid" << endl;
    }
    return 0;
}
