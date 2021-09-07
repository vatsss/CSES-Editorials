#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	stack<ll> stk;
	for(int i=0;i<n;i++){
		if(stk.empty())
		stk.push(arr[i]);
		else if(arr[i]==stk.top())
		continue;
		else
		stk.push(arr[i]);
	}
	cout<<stk.size()<<endl;
	return 0;
}
