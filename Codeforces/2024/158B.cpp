#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define pii pair<int,int>
#define vvc vector<vector<char>>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define fi first 
#define se second
#define pb push_back
#define outs(x) cout << x << " "
#define outln(x) cout << x << '\n'
#define FOR(i,s,e) for(int i=s;i<e;i++)
#define FOREV(i,s,e) for(int i=s; i>=e;i--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
using namespace std;

int main(){
    fastio
    int n;
    cin >> n;

    int arr[5] = {0};

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[x]++;
    }

    int a31 = min(arr[3], arr[1]);
    int left3 = arr[3] - a31;
    int left1 = arr[1] - a31;
    int group1 = left1 / 4;
    int a2 = ceil(arr[2] / 2.0);
    int a21 = 0;
    left1 = left1 - (group1 * 4);
    if(arr[2] % 2 && left1 <= 2) {
        a21 =1; a2--; left1 = 0;
    } else {
        left1 = (left1  ? 1 : 0);    
    }
    

    cout << arr[4] + a31 + left3 + group1 + a2 + left1 + a21;
    return 0;
}

/*
9
3 1 2 1 1 1 1 1 1
4 4
*/