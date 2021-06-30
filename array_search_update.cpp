#include<iostream>
using namespace std;


int main()
{
    int arr[100] , i ,size;
    cout<<"Enter the size of the array :"<<endl;
    cin>>size;
    cout<<"Enter elements of array :"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    //traversal of array
    cout<<"The array is :"<<endl;
    
     for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
   
   // searching an element
   int ele,flag=0;
   cout<<"Enter searching element :";
   cin>>ele;
   
   for(i=0;i<=size-1;i++)
   {
       if(arr[i]==ele)
       {
           cout<<"Element found at index :"<<i<<endl;
           flag=1;
           break;
       }
       
   }
   
   if(flag==0)
   cout<<"Element not found";
   
   cout<<endl;
   
   
   //updating an Element
   
   int updatepos,update_ele;
   
   cout<<"Enter update Position :";
   cin>>updatepos;
   cout<<"Enter new element value"<<endl;
   cin>>update_ele;
   
   arr[updatepos] = update_ele;
   
   cout<<"The array is :"<<endl;
    
     for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
   
}
