#include<iostream>
#include<cstdio>
using namespace std;
#define FOR(i,n,m) for(int i=n;i<=m;i++)//�궨���ʡ���볤��
int n,a[110],c[110],p,ans;
int main()
{
    scanf("%d",&n);FOR(i,1,n) scanf("%d",&a[i]); //����
    FOR(i,1,n) c[i]=c[i-1]+a[i];  //��ǰ׺��
    p=c[n]/n; //��ƽ����
    FOR(i,1,n-1) if(p*i!=c[i]) ans++;
    //����ʱ�ƶ�1-i������!=i*��ƽ��������Ҫ�ƶ�һ��
    printf("%d",ans);
    return 0;
}
