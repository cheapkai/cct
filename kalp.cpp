#include <bits/stdc++.h>

using namespace std;
typedef struct T {
int x;int y;
}T;
T L(int k,int a,int b)
{
T x;
if(k>a){
  

}

}
int main()
{
int t;cin >> t;
while(t--)
{
int k,n,a,b;cin >> k;cin >> n;cin >> a;cin >> b;

int p=0;int q = 0;


T ans = L(k,a,b);

//if(k>a){p += k/a; }
/*
p += k/a;k = k % a;if(k==0){
p--;k+= a;
}

q += k/b; k = k % b; if(k==0){
q--;k+=b;
}

if((p+q)>=n){
if(p>n)cout << n << endl;
else cout << p << endl;
}
else cout << "-1" << endl;
}
*/
return 0;
}
