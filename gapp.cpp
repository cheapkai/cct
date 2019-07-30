#include <bits/stdc++.h>

using namespace std;
int L(long long int& x,int * h)
{int c=0;int s=0;
	
	string g;
	do {
	cin >> g;
	(*h)++;
	if(g == "for"){
	int fg ;cin >> fg;
	s += fg*L(x,h);
	}
	if(g == "add")s++;
	}while(g != "end");

}
int main()
{
int n;cin >> n;string s;

//cin >> s;
//cout << s << endl;
//_Exit(0);
int h=0;long long int  x;
x = 0;
while(h<n)
{
cin >>  s;h++;
if(s=="for"){
 
int d;cin >> d;
int gh = L(x,&h);
x += gh*d;
}
else if(s=="add") x++;
if(x > (pow(((double)2),32) - 1)){cout << "OVERFLOW!!!" << endl;break;}

}
cout << x << endl;

return 0;
}
