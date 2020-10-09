#include <bits/stdc++.h>
using namespace std;
int i;
int ans;
int n;//【构造函数注意全局变量】 
int pa;
int cnt;
long int all;
int an[1000000];
void put(){
	for(int j=0;j<i;j++){
		if(an[j]!=pa){
			ans++;an[j+1]+=an[j]-pa;an[j]=pa;
			an[i]=pa+cnt;
		}
	}
}
int main(){
	scanf("%d",&n);
	for(int j=0;j<n;j++) {
		scanf("%d",&an[j]);all+=an[j];
	}
	pa=all/n;
	for(;i<n;i++){
		cnt+=an[i]-pa;
		if(i!=0){
			if(cnt>=0) put();
		}
	}
	printf("%d",ans);
	return 0;
}
