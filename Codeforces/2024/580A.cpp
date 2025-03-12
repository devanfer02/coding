#include <bits/stdc++.h>
#define vi vector<int>
#define fastio ci
using namespace std;

int main(){
    int n,max=1,curr=1;
    int a,b;
    scanf("%d",&n);
    scanf("%d",&a);
    for(int i = 1; i < n; i++){
        scanf("%d",&b);
        if(a <= b){
            curr++;
        } else {
            curr = 1;
        }
        if(max < curr) max = curr;
        a = b;
    }
    printf("%d\n",max);
    return 0;
}
