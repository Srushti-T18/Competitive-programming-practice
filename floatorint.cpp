#include <bits/stdc++.h>
using namespace std;
int main(){
    double N;
    cin >> N;
    int integer_part = (int)N;
    double fractional_part = N - integer_part;
    if(N==integer_part){
        cout << "int " << integer_part << endl; 
    }
    else{
        cout << "float " << integer_part << " " << fractional_part <<endl;
    }
    return 0;
}
