#include <bits/stdc++.h>

using namespace std;

int main()
{

int arr[] = {4,8,15,16,23,42};
unordered_map<int,pair<int,int>> m;
for(int i=0;i<5;i++)
	for(int j=i+1;j<6;j++)
	{
m[arr[i]*arr[j]]=(arr[i],arr[j]);

	}
unordered_map<int,int> um;um[4]=1;um[8]=1;um[15]=1;um[16]=1;um[23]=1;um[42]=1;
int ans[6];
int x;
cout << "? 1 1" << endl;
fflush(stdout);
cin >> x ;
ans[0] = sqrt(x);
m[sqrt(x)]=-1;
cout << "? 2 2" << endl;
fflush(stdout);
cin >> x; 
ans[1] = sqrt(x);
m[sqrt(x)]=-1;
cout << "? 3 4" << endl;
fflush(stdout);
cin >> x;
pair<int,int> yu = um[x];
cout << "? 4 5" << endl;
fflush(stdout);
cin >> x;
pair<int , int> yc = um[x];

if(yu.first == yc.first){
arr[3]=yu.first;
}
else if(yu.first == yc.second){

}
else if(yu.second == yc.first){

}
else if(yu.second == yc.second){

}

return 0;
}
