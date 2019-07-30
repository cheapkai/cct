{
#include<bits/stdc++.h>
using namespace std;
 
string multiplyStrings(string , string );
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	
    	cout<<multiplyStrings(a,b)<<endl;
    }
     
}
}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below function */
string multiplyStrings(string s1, string s2) {
   //Your code here

    vector<queue<int>> v;
    int id=0;
    int l=0;
    for(int y=s2.size()-1;y>=0;y--)
    {
        int bor = 0;
        int yc = s2[y]-48;
        queue<int> q;
        for(int yt=0;yt<id;yt++)q.push(0);
        id++;
        for(int jy = s1.size()-1;jy>=0;jy--)
        {int cc = yc * (s1[jy] - 48) + bor;
        cout << (cc%10) << endl;
        q.push(cc%10);bor = cc/10;
        }
        while(bor>0){q.push(bor%10);bor /= 10;
        }
        if(q.size()>l)l=q.size();
        v.push_back(q);cout << "$" << " ";
        while(!q.empty()){cout << q.front() << endl;
            q.pop();
        }
        cout << "$" << endl;
    }
    cout << "da" << " ";cout << v.size() << endl;
    _Exit(0);
    
    queue<int> qa;
    int borr=0;
    for(int yu=0;yu<l;yu++)
    {int cr=0;
    cr += borr;
        for(auto i : v){
            if(!i.empty()){
              cr += i.front();i.pop();  
            }
        }
        qa.push(cr%10);borr = cr/10;
        
    }
    while(borr>0){
    qa.push(borr%10);borr /= 10;
    }
    stack<char> stk;
    
    while(!qa.empty()){
        stk.push(qa.front()+48);
        qa.pop();
    }
    string g = "";
    while(!stk.empty())
    {cout << stk.top() << " ";
        g = g + stk.top();
        stk.pop();
    }

    cout << g << endl;
    return g;
}