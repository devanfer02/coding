#include <bits/stdc++.h>

using namespace std;

int count(int *arr, int &n){
    int i, counter = 0;
    for(i = 0; i < n; i++){
        if(*(arr + i) == 0){
            break;
        }
        counter++;
    }
    return counter;
}

void fill(int *arr, int &n){
    int i;
    for(i = 0; i < n; i++){
        *(arr + i) = 0;
    }
}

int main(){
    int n, i, counter = -1;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        cin >> n;
        cout << n;
        return 0;
    }
    int num;
    int strs[n];
    fill(strs,n);
    for(i = 0; i < n; i++){
        cin >> num;
        if(num == 1){
            counter++;
        }
        strs[counter]++;
    }
    cout << count(strs,n) << endl;
    for(i = 0; i < n; i++){
        if(strs[i] == 0) break;
        cout << strs[i] << " ";
    }

    return 0;

}