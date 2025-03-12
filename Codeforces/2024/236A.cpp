#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[130] = {0};
    int check = 0;
	string s;
    cin >> s;
    for(auto &c : s){
        arr[int(c)]++;
        if(arr[int(c)] == 1){
            check++;
        }
    }
    cout << (!(check % 2) ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
	return 0;
}
