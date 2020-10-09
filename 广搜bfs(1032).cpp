#include <bits/stdc++.h>
using namespace std;
string e,x,an[10],bn[10];
int cnt=10000;
int n;
map<string,int> c;
bool if_go=false;
void dfs(string a,int step);
int main(){
	cin>>x>>e;
	while(cin>>an[n++]>>bn[n]){
		if(n==6) break;
	}
	c[x]=0;
	dfs(x,0);
	if(if_go) printf("%d",cnt);
	else printf("NO ANSWER!");
	return 0;
}
void dfs(string a,int step){
	if(step>10) return;
	if(a==e){
		if_go=true;
		if(cnt>step) cnt=step;
		return;
	}
	for(int i=0;i<n;i++){
		int j=0;
		while(a.find(an[i],j)!=string::npos){
			string::size_type t=a.find(an[i],j);
			string p=a;
			p.replace(t,an[i].length(),bn[i]);
			if(c[p]==0||c[p]>step+1){
				c[p]=step+1;
				dfs(p,step+1);
			}
			j=t+1;
		}
	}
}
//找所有方案用dfs，找最优解用bfs 
