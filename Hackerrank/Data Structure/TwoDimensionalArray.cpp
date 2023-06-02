#include <bits/stdc++.h>

#define FOR(i,n) for(i = 0; i < n; i++)
#define FOR_REV(i,n) for(i = n - 1; i >= 0; i--)
#define fill(arr,args) memset(arr,args,sizeof(arr));
#define ull unsigned long long
#define IOS_FALSE ios_base::sync_with_stdio(false); 
#define CIN_NULL cin.tie(NULL);

using namespace std;

int main(){
    IOS_FALSE
    CIN_NULL
    
    int max = INT_MIN, sum = 0;
    
    int i,j;
    int arr[6][6];
    FOR(i,6){
        FOR(j,6){
            cin >> arr[i][j];
        }
    }

    int I = 0,J = 0;
    while(I < 4){
        // cout << "Ini I ---> " << I << endl;
        J = 0;
        while(J < 4){
            sum = 0;
            for(i = I; i < I + 3; i++){
                for(j = J; j < J + 3; j++){
                    if(i == I || i == I + 2){
                        sum += arr[i][j];
                    }
                    if(i == I + 1 && j == J + 1) sum += arr[i][j];
                }
            }
            if(max < sum) max = sum;
            // cout << sum << endl;
            J++;
        }
        I++;
    }
    cout << max;

    return 0;
}
