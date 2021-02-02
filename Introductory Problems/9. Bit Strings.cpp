#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;
ll n,i,s=1;
int main(){
	cin>>n;
	for(i=0;i<n;i++)
		s=2*s%m;		// ((int)1e9+7);
	cout<<s;
}
