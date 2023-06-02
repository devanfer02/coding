#include <bits/stdc++.h>

using namespace std;

//detecting if value of char c is smaller than value of first
bool canChange(bool &found, char &c, int &first){
    if(c < first){
        found = true;
        cout << "YES" << endl;
        return found;
    }
    return false;
}

//processing to find if username can be changed to alphabetically lower or not
void proc(bool &found, string &name, int &first){
    int j, k;
    for(j = 0; j < name.length(); j++){
        first = name[j];
        for(k = j + 1; k < name.length(); k++){
            if(canChange(found, name[k], first))break;
        }
        if(found) break;
    }
}

int main(){
    bool found;
    int n, i,j,k,first;
    cin >> n;
    string name;
    for(i = 0; i < n; i++){
        found = false;
        cin >> name;

        proc(found, name, first);

        if(!found) cout << "NO" << endl;
    }

    return 0;
}
