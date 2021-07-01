#include<iostream>
using namespace std;


//Creating a node class which has the data and the pointer to next node
class Node{
    public:
        int data;
        Node* next;
};

//function which prints/traverses the linked list
void printLL(Node *n){
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}


int main()
{
    
    //initiating the next pointer of nodes with null value
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    //allocating nodes in the heap memory
    head = new Node();
    second = new Node();
    third  = new Node();
    
    /* 
    assigning data and next pointer of the nodes
    */ 
  
    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;
    

    
    printLL(head);
    
    return 0;
    
    
}
