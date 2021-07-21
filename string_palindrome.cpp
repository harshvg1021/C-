#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    int count=0;
    string str;
    cin>>str;
    string str1;
    char a[str.length()-1];
    for(int i=str.length()-1;i>=0;i--)
    {
        
        a[str.length()-i-1]=str[i];
    }
    
    for(int i=0;i<=str.length()-1;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    
    
    for(int i=0;i<=str.length()-1;i++)
    {
       if(str[i]==a[i])
       count++;
    }
    
    if(count==str.length())
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    
}
