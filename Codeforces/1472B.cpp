#include <bits/stdc++.h>

using namespace std;

void test(){
    int n,t,a=0,b=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%d",&t);
        if(t==1)a++;
        else b++;
    }
    printf(a%2 || (!a && b%2) ? "NO\n" : "YES\n");
       
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        test();
    return 0;
}
