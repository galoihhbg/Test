#include <bits/stdc++.h>
#include <string>
#include "bignumber.h"
using namespace std;
long x,y;
void num(int a, int b, int c, int d)
{
	if (a<=c&&b<=d) { x=a;y=b;}
	if (a<=c&&b>d) {x=a;y=d;}
	if (a>c&&b<=d){x=c;y=b;}
	if (a>c&&b>d) {x=c;y=d;}
			
}
int main()
{
	int a,b,N;
	cin >> N;
	cin >> a >> b;
	x=a;y=b;
	num(a,b,x,y);
	for (int i=2;i<=N;i++)
	{
		cin >> a >> b;
		num(a,b,x,y);
	}
	cout<<endl;
	string m,n;
	m=to_string(x);
	n=to_string(y);
	cout << nhan(m,n);
	return 0;
}
