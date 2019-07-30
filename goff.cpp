#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;cin >> n;char s;
//cin >> s;
stack<char> stk;
int h = 0;int c = 0;
string ans ="";
while(h<n)
{
	cin >> s;
if(stk.empty())stk.push(s);
else if(s!=stk.top()){
	ans = ans + stk.top() + s;
	stk.pop();
		//c += stk.size();
	//stk.clear();
//while(!stk.empty())stk.pop();
}
else if(s==stk.top()){
	stk.pop();
	stk.push(s);
c++;
}
h++;
}
c += stk.size();
cout << c << endl;
cout << ans << endl;
return 0;
}
