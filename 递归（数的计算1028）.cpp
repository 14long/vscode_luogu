#include <bits/stdc++.h>
using namespace std;
int cnt;
int sum(int a){
	int sun=0;
	if(a==0) {
		cnt++;cout<<cnt<<"\n";//µİ¹éÔÚ×îµ×²ã++ 
		return 1; 
	}
	for(int i=0;i<=a/2;i++) sun+=sum(i);
	return sun;//µİ¹é£¬Ì«¾­µäÁË... 
}
int main(){
	cnt=0;
	int n;
	cin>>n;
	int a=sum(n);
	cout<<a<<"\n"; 
	return 0;
}

