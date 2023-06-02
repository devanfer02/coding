#include <bits/stdc++.h>

using namespace std;

int main(){
	int	n,b,d,x,tmp=0,res=0;
	cin >> n >> b >> d;
	for(int i=0;i<n;i++){
		cin >> x;
		if(x > b) continue;
		tmp += x;
		if(tmp > d){
			res++;
			tmp=0;
		}
	}
	cout << res << '\n';
	return 0;
}
