// sum of elements of two matrix using 2D array
#include<iostream>
using namespace std;
int main()
{
    int A[2][2],B[2][2],C[2][2];
    int i,j;
    
    cout<<"Enter the elements of first matrix: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements of second matrix: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>B[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"The sum of the two matrices is: "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}