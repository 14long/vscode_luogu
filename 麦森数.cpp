/*
#include <iostream>
#include <algorithm>//���ļ��� 
#include <cstdio>
using namespace std;
*/
#include <bits/stdc++.h>
using namespace std;
int a[100000];
int d[100000];
int t;

int p;
int main(){
	//�����ʼ��
	for(int i=1;i<=100000;i++){
		a[i]=0;d[i]=0;
	} 
	a[1]=1;
	 cin>>p;
	 t=1;
	 //����˷� ʹ�� 
	 for(int i=0;i<p;i++){
	 	for(int j=1;j<=t;j++){
			 a[j]*=2;
	 		if(a[j]>=10){
	 			a[j]-=10;d[j+1]++;//�˷���λ 
			 }
		 }
		 
		 for(int e=1;e<=t+1;e++){
	 		if(d[e]!=0) a[e]++;d[e]=0;
	 	 }
	// 	 if(a[t+1]!=0)
	 }//ʱ�̶�����λ��
	 //��һ�ж� �����ж� 
	 a[1]--; 
	 //�ж�λ��
	 //for(int i=100000;i>=1;i--){
	 //	if(a[i]!=0){
	 //		t=i;break;//break�÷��� 
	//	 }
	 //}
	 printf("%d\n",t);
	 for(int i=500;i>0;i--) {
	 	printf("%d",a[i]);
	 	if((i-1)%50==0)printf("\n");
	 }
	 return 0; 
}
