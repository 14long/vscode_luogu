#include <bits/stdc++.h>
using namespace std;
struct st{char name[20];int gra;int pa;char mon;char xi;int np;int sor;int all;};//自定义数据类型 
st ss[200];
int n;
bool cmp(st a,st b){
	if(a.all!=b.all) return a.all>b.all;
	else return a.sor<b.sor;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",ss[i].name);
		scanf("%d%d %c %c %d",&ss[i].gra,&ss[i].pa,&ss[i].mon,&ss[i].xi,&ss[i].np);
		ss[i].sor=i+1;ss[i].all=0;
	}
	
	for(int i=0;i<n;i++){
		if(ss[i].gra>80&&ss[i].np>=1) ss[i].all+=8000;
		if(ss[i].gra>85&&ss[i].pa>80) ss[i].all+=4000;
		if(ss[i].gra>90) ss[i].all+=2000;
		if(ss[i].gra>85&&ss[i].xi=='Y') ss[i].all+=1000;
		if(ss[i].pa>80&&ss[i].mon=='Y') ss[i].all+=850;
	}
	int al=0;
	for(int i=0;i<n;i++) al+=ss[i].all;
	sort(ss,ss+n,cmp); //排序 
	printf("%s\n",ss[0].name);
	printf("%d\n%d",ss[0].all,al);
	return 0;
}
