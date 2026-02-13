//to check whether a matrix is symmetric or not
#include<iostream>
using namespace std;
int main()
{
    int A[2][2],i,j,flag=1;
    cout<<"Enter the elements of the matrix: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(A[i][j]!=A[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        cout<<"The matrix is symmetric"<<endl;
    else
        cout<<"The matrix is not symmetric"<<endl;
    return 0;
}