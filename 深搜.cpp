#include <bits/stdc++.h>
using namespace std;
int n;
char k;
char wo[30][30];
int used[30];
int cnt;
void dfs(int i,int log);
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%s\n",wo[i+1]);
	scanf("%c",&k);
	for(int i=1;i<=n;i++){
		if(wo[i][0]==k){
			used[i]++;
			dfs(i,strlen(wo[i]));
			used[i]--;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
void dfs(int i,int log){
//	printf("%s\n",wo[i]);
	if(log>cnt) cnt=log;	
	for(int j=1;j<=n;j++){
		if(used[j]<2){
		for(int w=1;w<strlen(wo[i]);w++){
				bool if_go=false;
				for(int h=1;h<=w;h++){
					if(wo[i][strlen(wo[i])-w+h-1]!=wo[j][h-1]){//
						if_go=true;
						break;
					}
				}
				if(if_go==false){
						used[j]++;
//						if(log+strlen(wo[j])-w>cnt) cnt=log+strlen(wo[j])-w;
						dfs(j,log+strlen(wo[j])-w);
						used[j]--;				
				}
			}
		}
	}
}

//scanf("%s"  有一行字符读入，遇到 空格 	tab 换行符  结束输入   ，但仍有一个字符 tab \n 等留在所谓缓冲区内
//原 scanf（“%d”）  最后一行 有一个 字符换行 留在缓冲区 作为代替f 的字符输入 再加上输入的原f 自动关闭小黑框
//scanf 1有换行符缓冲 
//2有   空格 换行 tab 结束输入
