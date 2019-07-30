unordered_map<int,int> m;
Node* L(int in[],int post[],int a1,int a2,int cr,int n)
{Node* x;x->right=NULL;x->left=NULL;
x->data = post[cr];

 if(a1==a2)
    {
        
        return x;
    }
if(cr>0){int d=0;
    if(m[post[cr-1]]>m[post[cr]]){x->right=L(in,post,m[post[cr]]+1,a2,cr-1,n);
        d = a2-m[post[cr]];
        if((cr-1-d)>=0)
        if(m[post[cr-1-d]] < m[post[cr]])
    x->left = L(in,post,a1,m[post[cr]]-1,(cr-1)-d,n);
        
    }
    else {
         if(m[post[cr-1]] < m[post[cr]])
        x->left = L(in,post,a1,m[post[cr]]-1,(cr-1),n);
        
    }
return x;
}
else return x;
    
    return x;
}

//int ss = m[post[cr]];

    


//unordered_map<int,int> m;
Node *buildTree(int in[], int post[], int n)
{
    for(int y=0;y<n;y++)
    {
        m[in[y]]=y;
    }
    int cr=n-1;
   return  L(in,post,0,n-1,cr,n);
    
    // Your code here
}