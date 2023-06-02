#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,res=0;
    cin >> t;
    while(t--){
        int num,sum=0;
        for(int i = 0; i < 3; i++){
            cin >> num;
            sum += num;
        }
        if(sum > 1) res++;
    }
    cout << res << "\n";
	return 0;
}
