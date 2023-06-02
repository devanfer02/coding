#include <bits/stdc++.h>

using namespace std;


bool diff(int &a, int &b){
    int dif = a - b;
    
    if(dif >= -1 && dif <= 1) return true;
    return false;
}

int main(){
    int n, i, j, counter, max = 0;
    cin >> n;
    int arr[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    int a,b;
    for(i = 0; i < n; i++){
        a = arr[i];
        counter = 0;
        for(j = i; j < n; j++){
            b = arr[j];
            if(!diff(a,b)){
                if(max < counter) max = counter;
                a = arr[j];
                i = j - 1;
                break;
            } 
            
            counter++;
        }
        if(max < counter) max = counter;
    }

    cout << max << endl;    

    return 0;
}
