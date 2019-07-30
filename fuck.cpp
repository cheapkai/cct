int getId(int M[MAX][MAX], int n)
{
    stack<int> stk;
    for(int y=0;y<n;y++)
    {if(stk.empty())stk.push(y);
    else {
        if(M[stk.top()][y]==1 && M[y][stk.top()]==0){stk.pop();stk.push(y);
        }
        else if(M[stk.top()][y]==1 && M[y][stk.top()]==1)stk.pop();
        else if (M[stk.top()][y]==0 && M[y][stk.top()]==0)stk.pop();
    }
    }
    if(stk.empty())
    return -1;
    int sum = 0;int ss=0;
    for(int y = 0;y<n;y++)sum += M[y][stk.top()];
    for(int y =0;y<n;y++)ss += M[stk.top()][y];
    if(sum==(n-1) && ss==0)return stk.top();
    return -1;
}