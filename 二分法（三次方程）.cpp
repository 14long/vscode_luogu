#include <algorithm>
#include <
using namespace std;
float a,b,c,d;
float ans[4];
int cnt;
void erfen(float s1,float s2){//�Զ��庯��void a(int a1,int a2)����һϵ�к�����Ĳ�������������ֵ����������ֵ�����int������ 
	if(cnt==3) return;
	float a1=a*pow(s1,3)+b*pow(s1,2)+c*s1+d;
	float a2=a*pow(s2,3)+b*pow(s2,2)+c*s2+d;
	if((a1<0&&a2>0||a1>0&&a2<0)&&s2-s1<=1){
		float now=a1;
		float next=a1;
		for(float i=0.0005+s1;i<=s2;i+=0.0005){
			now=next;
			next=a*pow(i,3)+b*pow(i,2)+c*i+d;
			if(now>0&&next<0||now<0&&next>0){
				ans[++cnt]=i;//++a��ʾ�ȼ�1��ֵ��ִ�б���ʽ 
				break; 
			}
		}
	}
//	else if(s2-s1<1&&((a1<0&&a2<0)||(a1>0&&a2>0))) return;//return���Խ������������� 
	else if(s2-s1>1){
		erfen(s1,s1+(s2-s1)/2);
		erfen(s1+(s2-s1)/2,s2);
	}//�����־���д���� 
}
int main(){
	cin>>a>>b>>c>>d;
	erfen(-100,100);
	for(int i=1;i<=3;i++) cout<<setiosflags(ios::fixed)<<setprecision(2)<<ans[i]<<" ";//ȡС�������λ���
	return 0;
} 
