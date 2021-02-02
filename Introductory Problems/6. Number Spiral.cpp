#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll n,t,i,j,x,y,c=0,m=0;
	//cin>>n;
	ll a[5][5]={{1,2,9,10,25},
				{4,3,8,11,24},
				{5,6,7,12,23},
				{16,15,14,13,22},
				{17,18,19,20,21}};
	cin>>t;
	while(t--){
		cin>>x>>y;
		cout<<a[x-1][y-1]<<"\n";
//		for(i=1;i<5;i++){
//			for(j=1;j<5;j++)
//				cout<<a[]
		}
}
