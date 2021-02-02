#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll n,i,j,x,c=0,m=0;
	cin>>n;
	if(n==1)
		cout<<"1";
	else if(n==2 || n==3)
		cout<<"NO SOLUTION";
	else{
		if(n%2==0){
			for(i=2;i<=n;i+=2)
				cout<<i<<" ";
			for(i=1;i<n;i+=2)
				cout<<i<<" ";
			}
		else{
			for(i=2;i<n;i+=2)
				cout<<i<<" ";
			for(i=1;i<=n;i+=2)
				cout<<i<<" ";
		}
	}	
}
