#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin >> n;
unordered_map<char , int> m;
int h = 0;string x;long long int s=0;

//cin >> x;
while(h<n)
{cin >> x;
m[x[0]]++;

h++;
}
for(auto i : m)
{
int p = (i.second)/2;
int j = (i.second)%2;
s += ((p*(p-1))/2) + (((p+j)*(p+j-1))/2);

}
cout << s << endl;
return 0;
}
