// C++ program to search an element in an array using linear search
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int i,x,pos,n,flag=1;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            pos=i+1;
            flag=0;
            break;
        }
    }
    if(flag==0)
        cout<<"Element found at position "<<pos<<endl;
    else
        cout<<"Element not found"<<endl;
}
