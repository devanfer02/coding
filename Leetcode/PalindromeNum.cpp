#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int &x) {
     if(x < 0) return false;
     int y = x;
     unsigned int z = 0;
     while(x > 0){
         z = z * 10  + x % 10;
         x /= 10;
     }
     return y == z;
}


int main(){
    int x = 121;
    cout << isPalindrome(x);

    return 0;
}
