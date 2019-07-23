#include<bits/stdc++.h>
using namespace std;
string a,b;
int x[10001],y[10001],z[10001];
void add() {
	cin>>a>>b;
	for(int i=0; i<a.size(); i++) {
		x[i]=a[a.size()-1-i]-'0';
	}
	for(int i=0; i<b.size(); i++) {
		y[i]=b[b.size()-1-i]-'0';
	}
	int n=max(a.size(),b.size());
	for(int i=0; i<n; i++) {
		z[i]+=x[i]+y[i];
		if(z[i]>=10) {
			z[i+1]=z[i]/10;
			z[i]=z[i]%10;
		}
	}
	if(z[n]!=0) {
		cout<<1;
	}
	for(int i=n-1; i>=0; i--) {
		cout<<z[i];
	}
}
int main() {
	add();
}
