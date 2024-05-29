#include<bits/stdc++.h>
using namespace std;
#define unhuman ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

int main(){
	unhuman
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	#endif
	long long n;
	cin>>n;
	cout<<n;
	while(n!=1){
	if(n%2==0){n=n/2;}
	else n=3*n+1;
	cout<<" "<<n;
	}
}

