/*-------------- Sameer Vats --------------- */
#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)

#define szt size_t
#define pb push_back
#define pp pop_back
#define nl '\n'
#define MOD 1000000007
#define INF 1e18

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve(){
   int n,distinct = 0,prev;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    prev = -1;
    for(int i=0;i<n;i++){
        if(prev != arr[i])
            distinct++;
        prev = arr[i];
    }
    cout<<distinct;
}

int main(){
    fast_io;

    solve();
    return 0;
}
