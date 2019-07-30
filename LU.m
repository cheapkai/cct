
int n ;
A = rand(n,n);
B = A;
for k = 1 : (n − 1) 
A(k + 1 : n, k) = A(k + 1 : n, k)/A(k, k)
for i = (k + 1) : n 
A(i, k + 1 : n) = A(i, k + 1 : n) − A(i, k)A(k, k + 1 : n)
end for
end for

