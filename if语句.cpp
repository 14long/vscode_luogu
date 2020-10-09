#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=1;
	int b=3;
	if(a==1&&b==2) cout<<1; 
	if(a==1||b==2) cout<<2;
	if(a) cout<<4;
	else if(a) cout<<5<<"\n";//else if 和if最多进行一条 
	if(!a) cout<<5;
	int a1=a/10;
	int a2=a%10;
	int a3=301;//模运算 
	cout<<a1<<"\n"<<a2<<"\n"<<a3%100<<"\n";
	return 0;
}
