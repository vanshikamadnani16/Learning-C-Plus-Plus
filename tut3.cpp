#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0,temp;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    cout<<"Reversed number: "<<rev;
    if(n==rev)
        cout<<"\nThe number is a palindrome.";
    else
        cout<<"\nThe number is not a palindrome.";
        return 0;
}