#include <bits/stdc++.h>

using namespace std;

bool isDis(int n){
    int ar[10] = {0};
    int res = n;
    for(;n;n /= 10){
        if(++ar[n%10] > 1){
            return false;
        }
    }
    printf("%d\n",res);
    return true;

}

int main(){
    int n; scanf("%d",&n); ++n;
    while(1){
        if(isDis(n++)){
            break;
        }
    }
	return 0;
}
