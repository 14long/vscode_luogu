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

//scanf("%s"  ��һ���ַ����룬���� �ո� 	tab ���з�  ��������   ��������һ���ַ� tab \n ��������ν��������
//ԭ scanf����%d����  ���һ�� ��һ�� �ַ����� ���ڻ����� ��Ϊ����f ���ַ����� �ټ��������ԭf �Զ��ر�С�ڿ�
//scanf 1�л��з����� 
//2��   �ո� ���� tab ��������
