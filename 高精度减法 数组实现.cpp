#include<bits/stdc++.h>
using namespace std;
char a[10001],b[10001],c[10001];
int x[10001],y[10001],z[10001];
void minnus(){
	cin>>a>>b;
	int n1=strlen(a),n2=strlen(b);
	if(n1<n2||(n1==n2&&strcmp(a,b)<0))
	{
		cout<<"-";
		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);
		swap(n1,n2);
	}
	for(int i=0;i<n1;i++)
	{
		x[i]=a[n1-1-i]-'0';
	}
	for(int i=0;i<n2;i++)
	{
		y[i]=b[n2-1-i]-'0';
	}
	int n=max(n1,n2);
	for(int i=0;i<n;i++)
	{
		z[i]=x[i]-y[i];
		if(z[i]<0)
		{
		   z[i]=z[i]+10;
		   x[i+1]=x[i+1]-1;
		}
	}
	while(z[n]==0&&n>0)
	{
		n--;
	}
	for(int i=n;i>=0;i--)
	{
		cout<<z[i];
	}
}
int main()
{
	minnus();
}
