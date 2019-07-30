#include <bits/stdc++.h>

using namespace std;

int main()
{
	typedef struct T {
int a;int b;
	
	bool operator== (const T& t) const
	{
	return (this->a == t.a && this->b == t.b);
	}
	
	}T;
unordered_map<T,int> m;

int y ;cin >>y;int x;int z;
int j =0;
while( j<y)
{
j++;T g;
g.a = x;g.b = z;
m[g]++;
}


return 0;
}
