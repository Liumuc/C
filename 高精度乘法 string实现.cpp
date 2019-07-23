#include<bits/stdc++.h>
using namespace std;
string a1,b1;
int a[10001],b[10001],c[10001],d,e,n;
void times() {
	cin>>a1>>b1;
	d=a1.length();
	e=b1.length();
	for(int i=0; i<d; i++)
		a[i]=a1[d-i-1]-'0';
	for(int i=0; i<e; i++)
		b[i]=b1[e-i-1]-'0';//·´×Å´æ
	for(int i=0; i<e; i++) {
		for(int j=0; j<d; j++) {
			c[i+j]=c[i+j]+(b[i]*a[j]);
			c[i+j+1]+=c[i+j]/10;
			c[i+j]=c[i+j]%10;
		}
	}
	int n=d+e;
	while(n>0&&c[n]==0) {
		n--;
	}
	for(int i=n; i>=0; i--)
		cout<<c[i];
}
int main() {
	times();
	return 0;
}
