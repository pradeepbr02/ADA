#include<bits/stdc++.h>
using namespace std;
int MatrixChain(int a[], int n)
{
int m[n][n];
int i, j, k, c, d;
for (i = 1; i < n; i++)
m[i][i] = 0;
for (c = 2; c < n; c++)
{
for (i = 1; i < n - c + 1; i++)
{
j = i + c - 1;
m[i][j] = INT_MAX;
for (k = i; k <= j - 1; k++)
{
d = m[i][k] + m[k + 1][j]+ a[i - 1] * a[k] * a[j];
if (d < m[i][j])
m[i][j] = d;
}
}
}
return m[1][n - 1];
}
int main()
{
int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int a[n];
cout<<"Enter the array"<<endl;
for(int i=0;i<n;i++){
cin>>a[i];
}
cout << "Minimum matrix multiplications is "
<< MatrixChain(a, n);
return 0;
}
