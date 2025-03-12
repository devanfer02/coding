#include <bits/stdc++.h>

using namespace std;

int main(){
    int sum=0;
    int k,n,w;
    cin >> k >> n >> w;
    for(int i = 1; i <= w;i++){
        sum += i * k;
    }
    cout << (sum - n < 0 ? 0 : sum - n)<< "\n";
	return 0;
}
