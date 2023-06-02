#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s) {
    int counter = 0;
    int space = 0;
    int i, n = s.length();
    for(i = n - 1; i >= 0; i--){
        if(s[i] != ' ') break;
        space++;
    }
        
    for(i = n - 1; i >= 0; i--){
        if(s[i] == ' '){
            space--;
            if(space < 0) break;
            continue;
        } 
        counter++;
    }
    return counter;
}

int main(){
    string s = "fuk leetcode hackkerrank ftw     ";
    cout << lengthOfLastWord(s);

    return 0;
}
