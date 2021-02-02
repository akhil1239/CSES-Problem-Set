#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>0){
	cout<<n<<" ";
	while(n!=1){
		if(n%2==0)
			n=n/2;
		else
			n=n*3+1;
		cout<<n<<" ";
		}
	}
} 
