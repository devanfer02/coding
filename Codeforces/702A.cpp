#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,maxt=1,maxn=1;
    scanf("%d",&n);
    int a,b;
    scanf("%d",&a);
    for(int i = 1; i < n; i++){
        scanf("%d",&b);
        if(b > a){
            maxt++;
        } else {
            maxt = 1;
        }
        a = b;
        if(maxt > maxn) maxn = maxt;
    }
    cout << maxn << "\n";
    return 0;
}
