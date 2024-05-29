#include<bits/stdc++.h>
using namespace std;
#define unhuman ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define vi vector<int>
#define all(x) x.begin(),x.end()
 
 
int main(){
	unhuman
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	#endif
	int n,temp;
	cin>>n;
	vi x;
	for (int i = 0; i < n; ++i){cin>>temp;x.push_back(temp);}
	sort(all(x));
	int distinct=1;
	for(int i=1;i<n;i++)if(x[i]!=x[i-1]){distinct++;}
	cout<<distinct;
}

