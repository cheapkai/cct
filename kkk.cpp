 int t;
    cin >> t;
    while(t--)
    {
        
     int n;
     cin >> n;//base 1 index
        int a[1002];
        
        int b[1002]={0};
        int c[1002];
        int d[1002];
        memset(c,-1,sizeof(c));
        memset(d,-1,sizeof(c));
        int k = n;int p =1;
        while(k--)
        cin >> a[p++];
        
        b[0]=0;
        b[1]=0;
        
        for(int y=1;y<=n;y++){
         for(int w=0;w<y;w++)
         {long long prf = 0;
             int u = ((b[w]+(a[y]-a[w+1])) > (b[w]))?1:-1;
             if(u==1)
             { prf = b[w] + (a[y]-a[w+1]);}
             else if(u == -1)
             {
              prf = b[w];   
             }
             
        if(prf>b[y]){
            b[y] = prf;
            c[y] = (u==1)?1?-1;
            d[y] = w;
        }     
         
             
         }}}