#include <bits/stdc++.h>
using namespace std;

typedef struct T {
string s;
int x;
}T;
int main()
{int kap = (int)pow((double)2,(double)32) ;
	//cout << kap << endl;
	kap--;kap = 1000000000;
stack<T> s;

int n;cin >> n; string g;
while(n--)
{
cin >> g;
if(g == "for"){
	int st;cin >> st;
	s.push({g,st});
}
else if(g == "add")
{
s.push({g,1});
}
else if(g == "end")
{int y=0;
while(s.top().s != "for"){
if(s.top().s == "add")y += s.top().x;
s.pop();
}
if(y>kap){cout << "OVERFLOW!!!" << endl;return 0;}
y = y*(s.top().x);
if(y>kap){cout << "OVERFLOW!!!" << endl;return 0;}
s.pop();
s.push({"add",y});
}


}int sum=0;
while(!s.empty())
{
sum += s.top().x;
s.pop();
if(sum>kap){cout << "OVERFLOW!!!" << endl; return 0;}
}
cout << sum << endl;
return 0;
}
