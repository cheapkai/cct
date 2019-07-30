#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef struct T {
    int x;int i;
}T;

bool KK(T a, T b){
      if((int)a.x < (int)b.x)return 1;
      return 0;
  }  
int main() {
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int k;cin >> k;
        vector<T> v;
        for(int y=0;y<n;y++)
        {
            int x;cin >> x;v.push_back({x,y});
        }
        
        sort(v.begin(),(v.begin()+k),KK);
        cout << v[k-1].x << " ";
        for(int y=k;y<n;y++)
        {int g=y-1;if(v[g].i > (y-k)){if(v[y].x >= v[g].x)cout << v[y].x << " ";else{T r = v[y];v[y]=v[g];v[g]=r;cout << v[y].x << " ";}}
            else {cout << "pp" << endl;T r = v[y-k];v[y-k]=v[y];v[y]=r;
            cout << r.i << endl;
            sort((v.begin()+(y-k+1)),(v.begin()+(y-k+1+k)),KK);cout << v[y].x << " ";}
        }   
        cout << endl;
    }
	//code
	return 0;
}