#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef struct T {
   int n;bool p = false; 
}T;
struct cm {
    bool operator() (T const& a,T const& b){
    return (a.n > b.n);    
    }
};
struct km {
  bool operator() (T const& a,T const& b){
      return (a.n < b.n);
  }  
};
int main() {
    int t;cin >> t;
    while(t--)
    
    {priority_queue<T,vector<T>,cm> p;
        int k;cin >> k;int n;cin >> n;
        int h=0;
        int ss=0;
        while(h<n)
        {
            T r;cin >> r.n;p.push(r);
            h++;
        }
        if(n==0){cout << n << endl;continue;}
        int flg=1;
        while(flg)
        {if(p.empty()){flg=0;continue;}
            if(p.top().p == true)flg=0;
            else {
                T fg = p.top();
                cout << fg.n << endl;
                fg.p=true;fg.n += k;
                
                p.pop();p.push(fg);
            }
        }
        T low = p.top();
        priority_queue<T,vector<T>,km> z;
        while(!p.empty()){z.push(p.top());p.pop();}
        flg=1;int lm=-1;
        while(flg)
        {if(z.empty()){flg=0;continue;}
            if(z.top().p == true)flg=0;
            else {
                T fg = z.top();
                fg.p=true;
                cout << fg.n << endl;
                if((lm==-1) || (abs(fg.n - low.n)<lm))lm=abs(fg.n - low.n);
                fg.n -= k;
                z.pop();z.push(fg);
            }
        }
        T high = p.top();
        if((lm==-1) || (abs(high.n - low.n)<lm))lm=abs(high.n - low.n);
        //cout << lm << endl;
        
    }
	//code
	return 0;
}