#include <bits/stdc++.h> 
using namespace std;
int gcd(int x,int y){
	if(y==0) return x;
	return gcd(y,x%y);
}
int n,m,cnt;
int main(){
	cin>>n>>m;
	int code=n*m;
	int code2=sqrt(code);
	for(int i=n;i<=code2+1;i++){
		if(code%i==0&&gcd(i,code/i)==n) cnt+=2;
	}
	printf("%d",cnt);
	return 0;
}
