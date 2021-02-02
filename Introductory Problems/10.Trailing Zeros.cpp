#include<iostream>
#define ll long long
using namespace std;
ll n,i,t=1,c=0;
int main(){
	cin>>n;
//	for(i=1;i<=n;i++) t*=i;			// bad method for large no., apply direct formula
//	while(t%10==0) {c++; t=t/10;}	// n/5 + n/25 + n/125...
//	cout<<t<<"\n";
	for(i=5;i<=n;i*=5) c+=n/i;
	cout<<c;
}
