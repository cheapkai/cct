#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //int t;cin >> t;
    //while(t--)
    //{
        int pn = 0;
        priority_queue<int> l;
        priority_queue<int,vector<int>,greater<int>> r;
        int n;cin >> n;
        int h=0;
        while(h<n)
        {int c;cin >> c;
        if(h==0)
        {
            cout << c << endl;r.push(c);
        }
        else 
        {
            if((l.size()+r.size())%2 != 0){
                if(c<=r.top()){
                    l.push(c);
                    cout << ((l.top() + r.top())/2) << endl;
                }
                else if(c>r.top()){
                    l.push(r.top());r.pop();r.push(c);
                    cout << ((l.top()+r.top())/2) << endl;
                }
            }
            else if((l.size() + r.size())%2 == 0)
            {
                if(c<=r.top()){
                    l.push(c);r.push(l.top());l.pop();cout << r.top() << endl;
                }
                else 
                {
                    r.push(c);cout << r.top() << endl;
                }
            }
        }
            
            h++;
        }
        
        
    //}
	//code
	return 0;
}