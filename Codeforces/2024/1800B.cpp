#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std; 

//65 - 122

void test(){
    int arrs[127]; 
    memset(arrs,0,sizeof(arrs));
    string s;
    int n,k,pairs = 0;
    cin >> n >> k >> s;    
    for(char c : s){
        if(isupper(c)){
            if(arrs[(int)c+32] != 0){
                pairs++;
                arrs[(int)c+32]--;
            } else{
                arrs[(int)c]++;
            }
        } else {
            if(arrs[(int)c-32] != 0){
                pairs++;
                arrs[(int)c-32]--;
            } else {
                arrs[(int)c]++;
            }
        }
    }

    for(int i = 65; i <= 122 && k; i++){
        if(arrs[i] >= 2){
            arrs[i] % 2 ? n = (arrs[i] / 2) + 1 : n = (arrs[i] / 2);
            while((arrs[i] > n) && k){
                pairs++;
                arrs[i]--;
                k--;
            }
        }
    }
    cout << pairs << endl;
}

int main() { 
    fastio
    int t;
    cin >> t;
    while(t--) test();
    

    return 0;
}