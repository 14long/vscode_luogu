#include <bits/stdc++.h> 
using namespace std;
int a[101];
bool cmp(int x,int y);
int main(){
	int n;
	cin>>n;
	int cnt=n;a[101]=1001;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(a[i]==a[i+1]){
			a[i]=1001;cnt--;
		}
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=cnt;i++) cout<<a[i]<<endl;
	return 0;
}
bool cmp(int x,int y){
	return x>y;//其他排序规则…… 
}
