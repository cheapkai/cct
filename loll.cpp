 int t;
    cin >> t;
    while(t--)
    {int flag = 100;
    string s;
    cin >> s;int cr = 65;char ty='a';
    int arr[200]={0};
    for(auto it= s.rbegin();it!=s.rend();it++)
        {
            if(arr[(int)(*it)]==0)
  arr[(int)(*it)] = 1;       

else if(arr[(int)(*it)] == 1){
    ty = *it;flag=-1;
}}
        if(flag==-1)
        cout << ty << endl;
        else
        cout << "-1" << endl;
    }