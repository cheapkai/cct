#include <bits/stdc++.h>

int main()
{int n;stack<int> s;
	cin >> n;
for(int y=0;y<n;y++)
{
int x;cin >> x;
s.push(x);
}

vector<int> v;

for(int y=0;y<9;y++)
{int jj;cin >> jj;v.push_back(jj);}

int flg=1;int yu=0;
queue<int> q; 

while(!s.empty())
{
if((v[s.top()-1]<s.top()) && yu==0){q.push(s.top());s.pop();}
else if(yu==1 &&  {yu=1;q.push(v[s.top()-1]);}


}


return 0;
}
