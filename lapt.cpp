#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef struct T {
   int t;bool f; 
}T;
struct cm {
  bool operator()(T const& a,T const& b)
  {
      if(a.t > b.t) return 1;
      if(a.t == b.t){if(a.d==true && b.d==false){}
      else{}}
  }
};
int main()
{int t;cin >> t;
while(t--)
{priority_queue<T,vector<T>,cm>  p;
 int n;cin >> n;
 int h = 0;
 while(h<n)
 {T d;cin >> d.t;d.f = true;
     p.push(d);
     h++;
 }
 h=0;
    while(h<n)
    {
        T d;cin >> d.t;d.f = false;
        p.push(d);
        h++;
    }
    int l=0;int c=0;
    while(!p.empty())
    {if(p.top().f==true){c++;if(c>l)l=c;}else if(p.top().f==false){c--;if(c>l)l=c;}
        p.pop();}
    
cout << l << endl;
    
}
return 0;
}