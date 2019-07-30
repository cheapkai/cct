   int t;
    cin >> t;
    while(t--)
    {
     string a = "";
     string b = "";
     int c;
     cin >> c;
     int k;
     cin >> k;
     int n;
     cin >> n;
     
     
     while(c>0)
     {
         //cout << (char)(c%2 + 48);
         a = a + ((char)(c%2 + 48));
         c = c/2;
    }
    //cout << a << endl;
    
    string g = a;
    //cout << g << endl;
    //return 0;
    string r = "";
    int h = n;
    while(h--){
        r = "";
    for(auto it = g.begin();it!=g.end();it++)
     {
        // cout << (*it) << endl;
    if((*it) == (char)(48 + 1)){
        //cout << "ha" << " ";
        r =r + "10";
       // cout << r << endl;
    } 
    else if((*it)==(char)(48 + 0))r = r + "01"; 
    }
    //return 0;
    g = r;   
   // cout << g << " ";
//    cout << r << endl;
    }
    
    //cout << g[0] << endl;
    //return 0;
    int count = 0;
    //cout << n << endl;
    for(auto it = g.rbegin();it!=g.rend();it++)
     {count++;
     //cout << count << " ";
     
     if(count == k){
         cout << (*it) << endl;
     break;    
     }}   
    
        
    }