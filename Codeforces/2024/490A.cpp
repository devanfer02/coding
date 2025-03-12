#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int,vector<int>> tmp;
    int arr[4] = {0};
    int n,x,size = INT_MAX;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        tmp[x].push_back(i+1);
    }
    for(int i = 1; i <= 3; i++){
        if(!tmp[i].size()){
            cout << 0 << "\n";
            return 0;
        }
        if(size > tmp[i].size()){
            size = tmp[i].size();
        }
    }
    cout << size << "\n";
    for(int i = 0; i < size; i++){
        for(int j = 1; j <= 3; j++ ){
            cout << tmp[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
