#include <bits/stdc++.h>
using namespace std;
void erfen(int a1,int a2);
int main(){
	int a=1;
	erfen(2,-2);
	cout<<++a;
	cout<<a++;
	return 0; 
} 
void erfen(int a1,int a2){
	if(a1>=0||a2>=0) cout<<"a\n";
	else if(a1<=0||a2<=0) cout<<"b\n";
}
