#include<bits/stdc++.h>
using namespace std;
int main(){
int n,tmp;
cin>>n;
int arr[n+1]={0};
for(int i=1;i<n;i++){
cin>>tmp;
arr[tmp]=tmp;
}
for(int i=1;i<=n;i++){
if(arr[i]==0)cout<<i;
}	
}
