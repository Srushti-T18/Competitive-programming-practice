#include <bits/stdc++.h>
using namespace std;
int main(){
    int A, B, C;
    char S, Q;
    int res;
    cin >> A >> S >> B >> Q >> C;
    if(S=='+'){
        res = A+B;
    }
    else if(S=='-'){
        res = A-B;
    }
    else if(S=='*'){
        res = A*B;
    }
    if(res==C){
        cout << "Yes" << endl;
    }
    else{
        cout << res << endl;
    }
    return 0;
}
