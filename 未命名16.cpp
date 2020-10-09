#include <bits/stdc++.h>
using namespace std;
string in,cp,ti;
struct st{string a1;string a2;};
st sc;
bool fail=false;
int main(){
	int cnt=0;
	sc.a1="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	sc.a2="000000000000000000000000000";
	//memset(sc.a2,'0',sizeof(sc.a2));
	cin>>in>>cp>>ti;
	for(int i=1;i<=26;i++){
		sc.a2[i]='0';
	}
	for(int i=1;i<=in.length();i++){
		if(sc.a2[in[i-1]-'A'+1]!='0'&&sc.a2[(int)(in[i-1]-'A'+1)]!=cp[i-1]){
			fail=true;break;
		}
		else{
			sc.a2[in[i-1]-'A'+1]=cp[i-1];cnt++;
		}
	}
	if(fail||cnt<26){
		cout<<"Failed"<<endl;
		return 0;
	}
	int p[50];
	memset(p,0,sizeof(p));
	for(int i=1;i<=26;i++){
		p[sc.a2[i]-'A'+1]++;
		if(p[sc.a2[i]-'A'+1]>1){
			fail=true;
			break;
		}
	}
	if(fail){
		cout<<"Failed"<<endl;return 0;
	}
	else{
		for(int i=0;i<ti.length();i++){
			cout<<sc.a2[ti[i]-'A'+1];
		}
		return 0;
	}
}
