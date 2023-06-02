#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    bool stop = false;
    string prefix = "";
    int n = strs.size(), i, j, count;
    int strLen = strs[0].length();

    for(i = 0; i < strLen; i++){
        count = 0;
        for(j = 1; j < n; j++){
            if(strs[0][i] == strs[j][i]){
                count++;
            } else{
                stop = true;
                break;
            }

        }
        if(stop){
            break;
        }
        if(count == n - 1){
            prefix += strs[0][i];
        }

    }
    return prefix;
}


int main(){
    vector<string> str;
    str.push_back("cir");
    str.push_back("car");

    cout << longestCommonPrefix(str);
    return 0;

}
