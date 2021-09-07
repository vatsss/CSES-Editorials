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
    int n;
    cin>>n;
    unordered_set<int> st;
    for(int i=0,x;i<n;i++){
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<nl;
}

int main(){
    fast_io;

    solve();
    return 0;
}
