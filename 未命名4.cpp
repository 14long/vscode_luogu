#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio> 
using namespace std;
int main(){
    double a1,a2,a3;
    cin>>a1>>a2>>a3;
    double p=pow(a1,a2);//加减法函数 
    double d=pow(p,1/3.3);
    cout<<setprecision(1)<<fixed<<d<<endl;
    return 0;
}
//char(a-32);
//cout<<setprecision(0)<<fixed<<a1<<endl<<a2;
//include <bits/stdc++.h>
//数字计算 pow（a,b） sqrt(a) pow(a,1/3.0) 

