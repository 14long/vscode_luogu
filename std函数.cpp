#include <bits/stdc++.h>
using namespace std;
int main(){
//	float a;
//	cin>>a;
//ctl数学函数
	int a2=-2;
	int a1=abs(a2);//绝对值 
	cout<<a1<<"\n"; 
	double b=sqrt(3);//开根 
	cout<<b<<"\n";
	int c=pow(a2,2);//乘方 
	double s1=(double)1/3;double s2=1/(double)3;//效果相同 
	cout<<s1<<endl<<s2<<endl;
	cout<<c<<"\n";
	double a3=2.9999;
	cout<<ceil(a3)<<"\n"<<floor(a3)<<"\n";//向上下取整
	cout<<++a1<<a1++<<"\n";//++a1属于先加一赋值后再执行表达式
	cout<<(int)a3<<"\n";//强制类型转换 
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<a3<<"\n";//保留n位有效数字 四舍六入五留双 保留了数位3.00 
//字符串
	char a4[100];
	memset(a4,0,sizeof(a4));//初始化数组 
	a4[1]='a';//char型用'' 
	cout<<strlen(a4)<<"\n";//字符串长度
	char a5;
	//strcpy(a4[1],a5[1]);cout<<a5[1]<<"\n"; //复制
	//if(strcmp(a4,a5)==0){
	//	cout<<"copy\n";
	//} 
	
}
