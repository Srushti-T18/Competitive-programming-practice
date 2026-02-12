#include <bits/stdc++.h>
using namespace std;

bool palind(string s){
    int left = 0;
    int right = s.size() - 1;
    while(left<right){
        if(!isalnum(s[left])) left++;
        else if(!isalnum(s[right])) right--;
        else if(tolower(s[left]) != tolower(s[right])) return false;
        else{
            left++;
            right--;
        }
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    bool ans = palind(s);
    if(ans == true){
        cout << "palindrome" << endl;
    }
    else{
        cout << "not palindrome" << endl;
    }
    return 0;
}
