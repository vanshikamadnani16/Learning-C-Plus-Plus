#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str="HELLO";
    cout<<"Original String: "<<endl<<str<<endl;
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    cout<<"Reversed String:"<<endl;
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}