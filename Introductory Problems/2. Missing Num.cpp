#include<iostream>
using namespace std;
int main(){
	long long n,t,s=0;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>t;
		s+=t;
	}
	cout<<n*(n+1)/2-s;
}
