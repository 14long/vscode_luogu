#include <bits/stdc++.h>
using namespace std;
int main(){
//	float a;
//	cin>>a;
//ctl��ѧ����
	int a2=-2;
	int a1=abs(a2);//����ֵ 
	cout<<a1<<"\n"; 
	double b=sqrt(3);//���� 
	cout<<b<<"\n";
	int c=pow(a2,2);//�˷� 
	double s1=(double)1/3;double s2=1/(double)3;//Ч����ͬ 
	cout<<s1<<endl<<s2<<endl;
	cout<<c<<"\n";
	double a3=2.9999;
	cout<<ceil(a3)<<"\n"<<floor(a3)<<"\n";//������ȡ��
	cout<<++a1<<a1++<<"\n";//++a1�����ȼ�һ��ֵ����ִ�б��ʽ
	cout<<(int)a3<<"\n";//ǿ������ת�� 
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<a3<<"\n";//����nλ��Ч���� ������������˫ ��������λ3.00 
//�ַ���
	char a4[100];
	memset(a4,0,sizeof(a4));//��ʼ������ 
	a4[1]='a';//char����'' 
	cout<<strlen(a4)<<"\n";//�ַ�������
	char a5;
	//strcpy(a4[1],a5[1]);cout<<a5[1]<<"\n"; //����
	//if(strcmp(a4,a5)==0){
	//	cout<<"copy\n";
	//} 
	
}
