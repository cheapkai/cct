void L(stack<int>& A,Node* root)
{cout << "bar" << " ";
    if(root==NULL)return;
    L(A,root->right);
    if(!A.empty())A.push(A.top() + root->data);
    else A.push(root->data);
    L(A,root->right);
}

void modify(Node **root)
{cout << "start" << " ";
stack<int> A;int t;
L(A,*root);if(A.empty())return;
struct Node x;
cout << "AA" << " ";
x.data = A.top();A.pop();
*root = &x;

Node* h = &x;
cout << h->data << " ";

/*
h->left = NULL;
while(!A.empty())
{
    struct Node g;g.data = A.top();A.pop();g.left=NULL;
    h->right = &g;
    h = &g;
    
}
h->right = NULL;
*/
_Exit(0);
}