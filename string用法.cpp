#include <bits/stdc++.h>
using namespace std;
int main(){
	string a="my honesty";
	string a1=" is disbrutal.";
	if(a.compare("my honesty")==0) cout<<a<<endl;
	a.append(a1);
	cout<<a<<endl;
	a.append("it's me.'",0,8);
	cout<<a<<endl;
	a.append("punchline.",5);
	a.append(5,'t');
	cout<<a<<endl;
	cout<<a.length()<<endl;
	cout<<a.max_size()<<endl;
	a.assign(5,'t');
	cout<<a<<endl;
	a.assign("it's me.",0,8);
	cout<<a<<endl;
	a.assign("quake.",6);
	cout<<a<<endl;
	a.assign("rap god.");
	cout<<a<<endl; 
	bool a2=false;
	if(a2==0) cout<<"wrong"<<endl<<(int)a2<<endl;
	cout<<a[0]<<endl;//string[0]
	return 0;
}
