#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

#define N 4 

// This function multiplies 
// mat1[][] and mat2[][], and 
// stores the result in res[][] 
void multiply(int m1,int m2,int mat1[][N],int n1,int n2, 
			int mat2[][N], 
			int res[][N]) 
{ 
	int i, j, k; 
	for (i = 0; i < m1; i++) 
	{ 
		for (j = 0; j < n2; j++) 
		{ 
			res[i][j] = 0; 
			for (k = 0; k < m2; k++) 
				res[i][j] += mat1[i][k] * 
							mat2[k][j]; 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	int i, j; 
	
	int m1,m2,n1,n2;
	cout << "enter dimensions" << endl;
	cin >> m1;
	cin >> m2;
	cin >> n1;
	cin >> n2;

	int res[N][N]; // To store result 
/*	int mat1[N][N] = {{1, 1, 1, 1}, 
					{2, 2, 2, 2}, 
					{3, 3, 3, 3}, 
					{4, 4, 4, 4}}; 

	int mat2[N][N] = {{1, 1, 1, 1}, 
					{2, 2, 2, 2}, 
					{3, 3, 3, 3}, 
					{4, 4, 4, 4}}; 

					*/
cout << "Enter mat1" << endl;	

int mat1[N][N];
int mat2[N][N];

for(i=0;i<m1;i++)
	for(j=0;j<m2;j++)
		cin >> mat1[i][j];

cout << "Enter mat2" << endl;

for(i=0;i<n1;i++)
	for(j=0;j<n2;j++)
		cin >> mat2[i][j];



multiply(m1,m2,mat1,n1,n2, mat2,res); 

	cout << "Result matrix is \n"; 
	for (i = 0; i < m1; i++) 
	{ 
		for (j = 0; j < n2; j++) 
		cout << res[i][j] << " "; 
		cout << "\n"; 
	} 

	return 0; 
} 

// This code is contributed 
// by Soumik Mondal 

/*
using namespace std; 

// Multiplies two matrices mat1[][] 
// and mat2[][] and prints result. 
// (m1) x (m2) and (n1) x (n2) are 
// dimensions of given matrices. 
void multiply(int m1, int m2, int mat1[][2], 
			int n1, int n2, int mat2[][2]) 
{ 
	int x, i, j; 
	int res[m1][n2]; 
	for (i = 0; i < m1; i++) 
	{ 
		for (j = 0; j < n2; j++) 
		{ 
			res[i][j] = 0; 
			for (x = 0; x < m2; x++) 
			{ 
				*(*(res + i) + j) += *(*(mat1 + i) + x) * 
									*(*(mat2 + x) + j); 
			} 
		} 
	} 
	for (i = 0; i < m1; i++) 
	{ 
		for (j = 0; j < n2; j++) 
		{ 
			cout << *(*(res + i) + j) << " "; 
		} 
		cout << "\n"; 
	} 
} 

// Driver code 
int main() 
{ 
	int mat1[][2] = { { 2, 4 }, { 3, 4 } }; 
	int mat2[][2] = { { 1, 2 }, { 1, 3 } }; 
	int m1 = 2, m2 = 2, n1 = 2, n2 = 2; 
	multiply(m1, m2, mat1, n1, n2, mat2); 
	return 0; 
} 

*/




