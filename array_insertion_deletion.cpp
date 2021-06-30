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
   
   
   //Insertion at specific index
   
   int ele,pos;
   cout<<"Element :";
   cin>>ele;
   cout<<"Position :";
   cin>>pos;
   
   
   for(i=size-1;i>=pos;i--)
   {
       arr[i+1]=arr[i];
   }
   
   arr[pos] = ele;
   
   size++;
   
   
    cout<<"The array after insertion is :"<<endl;
    
     for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    
    //Deletion of Element
    
    int delpos;
    cout<<"Enter position of deletion :";
    cin>>delpos;
    
    for(i=delpos;i<=size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    
    size--;
    
     cout<<"The array after deletion is :"<<endl;
    
     for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    
}
