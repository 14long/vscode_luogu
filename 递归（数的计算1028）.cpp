#include <bits/stdc++.h>
using namespace std;
int cnt;
int sum(int a){
	int sun=0;
	if(a==0) {
		cnt++;cout<<cnt<<"\n";//�ݹ�����ײ�++ 
		return 1; 
	}
	for(int i=0;i<=a/2;i++) sun+=sum(i);
	return sun;//�ݹ飬̫������... 
}
int main(){
	cnt=0;
	int n;
	cin>>n;
	int a=sum(n);
	cout<<a<<"\n"; 
	return 0;
}

