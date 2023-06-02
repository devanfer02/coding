#include <bits/stdc++.h>
using namespace std;
 
int main(){	
    int n,a,b; scanf("%d",&n);
    while(n--){
	scanf("%d %d",&a,&b);
	if(!(a%b)&&a>=b) cout << 0 << '\n';
	else cout << abs(b - (a%b)) << '\n';
    }
    return 0;
}
