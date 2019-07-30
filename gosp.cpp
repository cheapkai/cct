#include <iostream>
#include<algorithm>
#include<vector>
#include<queue>
//#include<priority_queue>
#include<unordered_map>
#include<string>

using namespace std;
bool comp(const string a,const string b)
{
    return lexicographical_compare(a.begin(),a.end(),b.begin(),b.end());
    
}
class Solution {
public:
    vector<string> findItinerary(vector<pair<string, string>> tickets) {

       // priority_queue<string, vector<string>, lexicographical_compare>* adj = new priority_queue<string, vector<string>,lexicographical_compare>[27];
        
        unordered_map<string, priority_queue<string. vector<string>, comp>> adj;
        
        
        int i=0;
        for(i=0;i<tickets.size();i++)
        {string a = 
            tickets[i].first;
         string b = tikets[i].second;
         adj[a].push(b);
         }
        
        queue<string> q1;
        q1.push(("JFK"));
        vector<string> ans;
        while(!q1.empty())
        {
            string p = q1.front();q1.pop();
            ans.push_back(p);
            if(!adj[p].empty()){
                q1.push(adj[p].top());adj[p].pop();
                
            }
            
            
        }
        
        return ans;
    }
};



