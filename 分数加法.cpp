#include<iostream>
#include<stdio.h>
using namespace std;
int sf(int m,int n)
{
    int r;
    r=m%n;
    m=n;
    n=r;
    if(r==0)
        return m;
    else
        sf(m,n);
}
int main()
{
	int a,b,c,d;
	int g,g1,g2;
	int fz,fm;
	int gys;
	scanf("%d/%d %d/%d",&a,&b,&c,&d);   // a/b c/d
	if(b!=d)
	{
		g=b*d;
		g1=g/b;
		g2=g/d;
    fz=a*g1+c*g2;
    fm=g;
    gys=sf(fz,fm);
    }
    if(b==d)
    {
        if(sf(a+c,b)==1)
	 	cout<<(a+c)<<"/"<<b;
	 	else
	 	{
	 	if(sf(a+c,b)==b)
	 	{
	 		cout<<(a+c)/b;
		 }
		 else
		 cout<<((a+c)/sf(a+c,b))<<"/"<<(b/sf(a+c,b));
		}
	}
	if(b!=d)
	{
		cout<<((fz)/gys)<<"/"<<(g/gys);
	}
}
