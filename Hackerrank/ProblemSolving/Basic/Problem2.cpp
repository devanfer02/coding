#include <bits/stdc++.h>

using namespace std;

//checking if the current widget stock is available 
void checkStock(long &widget, long &num, long &counter){
    if(widget >= num ){
        counter++;
        widget -= num;
    }
}
    

int main(){
    long n, i,widget, counter = 0;
    cin >> n;
    long arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> widget;
    sort(arr, arr + n);
    for(i = 0; i < n; i++){
        checkStock(widget, arr[i], counter);
    }

    cout << counter;
}
