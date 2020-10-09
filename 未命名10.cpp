#include<iostream>
#include<cstdio>
using namespace std;
#define FOR(i,n,m) for(int i=n;i<=m;i++)//宏定义节省代码长度
int n,a[110],c[110],p,ans;
int main()
{
    scanf("%d",&n);FOR(i,1,n) scanf("%d",&a[i]); //读入
    FOR(i,1,n) c[i]=c[i-1]+a[i];  //求前缀和
    p=c[n]/n; //求平均数
    FOR(i,1,n-1) if(p*i!=c[i]) ans++;
    //当此时牌堆1-i总牌数!=i*总平均数，需要移动一次
    printf("%d",ans);
    return 0;
}
