#include <iostream>

using namespace std;

bool checkPalindrome(string s, int start, int end){
    if(start == s.length() / 2 ){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    return checkPalindrome(s, start+1, end-1);
}

int main(){
    string a = "abcdadfcba";
    cout << checkPalindrome(a, 0, a.length() - 1);
}