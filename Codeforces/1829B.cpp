#include <bits/stdc++.h>

using namespace std;

void test(){
	int n,x,mxfr=0,mxrn=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		if(!x){
			mxrn++;
			if(mxfr<mxrn)
				mxfr = mxrn;
		} else {
			if(mxfr < mxrn){
				mxfr = mxrn;
			}
			mxrn=0;
		}
	}
	cout << mxfr << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		test();
	}
	return 0;
}
