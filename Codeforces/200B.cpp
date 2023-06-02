#include <bits/stdc++.h>
using namespace std;
 
int main(){	
    int n; double x,tmp=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
	scanf("%lf",&x); tmp += x/100;
    }
    printf("%.10lf\n",tmp/n*100);
    return 0;
}
