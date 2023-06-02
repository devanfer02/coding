#include <bits/stdc++.h>

using namespace std;

void test(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(__gcd(arr[i],2*arr[j]) > 1 || __gcd(arr[j],2*arr[i]) > 1)
                count++;
        }
    }
    printf("%d\n",count);
}

int main(){
    int t;  
    scanf("%d",&t);
    while(t--){     
        test();
    }
    return 0;
}
