#include <bits/stdc++.h>
using namespace std;
char li1[200],li2[200];
char wo[200];
int bsta[30];
char sta[30];
int main(){
	memset(li1,'0',sizeof(li1));
	memset(sta,0,sizeof(sta));
	memset(wo,0,sizeof(wo));
	memset(li2,0,sizeof(li2));
	scanf("%s",li1);
	scanf("%s",li2);
	scanf("%s",wo);
	for(int i=0;i<strlen(li2);i++){
		bool ans=false;
		for(int j=0;j<26;j++){
			if(sta[j]==0){ans=true;break;}
		}
		if(!ans) break;
		for(int j=0;j<26;j++){
			if(bsta[j]>1){
				printf("Failed");
				return 0;
			}
		}
		if(sta[li1[i]-65]==0){
			sta[li1[i]-65]=li2[i];
			bsta[li2[i]-65]++;
		}
		else if(sta[li1[i]-65]!=0&&sta[li1[i]-65]!=li2[i]){
			printf("Failed\n");
			return 0;
		}
		else if(i==strlen(li1)-1){
			for(int j=0;j<26;j++){
				if(sta[j]==0){
					printf("Failed\n");
					return 0;
				}
			}
		}
		for(int j=0;j<26;j++){
			if(bsta[j]>1){
				printf("Failed");
				return 0;
			}
		}
	}
	for(int i=0;i<strlen(wo);i++){
		printf("%c",sta[wo[i]-65]);
	}
	printf("\n");
	return 0;
}


