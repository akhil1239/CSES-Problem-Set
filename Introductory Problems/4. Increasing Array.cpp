#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll n,x,c=0,m=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		m=max(x,m);
		c+=m-x;
	}
	cout<<c;
}

/*
5
3 2 5 1 7
*/
