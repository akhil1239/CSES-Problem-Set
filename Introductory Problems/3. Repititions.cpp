#include<iostream>
//#include<string.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	int c=1,m=1;
	for(int i=0;i<n.length();i++){
		if(n[i]==n[i+1]){
			c++;
			m=max(c,m);
			}
		else{
			c=1;}
	}
	cout<<m;
}
