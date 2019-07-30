typedef struct T {
    int x;int i;
}T;
bool MM(T a,T b)
{
    return (a.x>b.x);
    
}
Node *compute(Node *head)
{vector<T> v;int y=0;
while(head!=NULL)
{v.push_back({head->data,y});y++;head = head->next;}
sort(v.begin(),v.end(),MM);int pr = v[0].x;int ig = -1;

Node * u = newNode(0);Node * tm = u;

for(int y=0;y<v.size();y++)
{
    cout << "da" << " ";
    cout << v[y].x << " ";
if(v[y].x<pr && v[y].i>=ig){ig = v[y].i;pr=v[y].x;
   Node * i = newNode(pr);tm->next = i;tm = tm->next;}}
//tm->next = NULL;
//_Exit(0);
Node* ty = u->next;
//while(ty!=NULL)
//{cout << ty->data << " ";ty=ty->next;}

return (head);
}