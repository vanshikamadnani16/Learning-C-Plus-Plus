//multiplication of a two matrix using 2D array
#include<iostream>
using namespace std;
int main()
{
    int A[5][5],B[5][5],C[5][5];
    int i,j,k,m,n,x,y;
    cout<<"Enter the number of rows and columns of first matrix: ";
    cin>>m>>n;
    cout<<"Enter the elements of first matrix: ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter the number of rows and columns of second matrix: ";
    cin>>x>>y;
    cout<<"Enter the elements of second matrix: ";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>B[i][j];
        }
    }
    if(n==x)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<y;j++)
        {
            C[i][j]=0;
            for(k=0;k<n;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
else 
cout<<"Matrix multiplication is not possible"<<endl;
    return 0;
}