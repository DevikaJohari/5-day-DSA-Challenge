#include <iostream>
#include <conio.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next; 
};
void printLinkedList(Node* n)
{
   Node* t=n;
    while(t !=NULL)
    {
    cout<<t->data<<" ";
    t=t->next;
    }
    cout<<"\n";
}
Node* insert(int num)
{
    Node* newItem=NULL;
    newItem = new Node();
    if(newItem != NULL)
    {
        
        newItem->next=NULL; 
        newItem->data=num; 
    }
    else{
        cout<<"Allocation Failure";
    }
    return newItem;
}
 Node* mergeTwoLists(Node* l1, Node* l2) 
    {
        if(l1==NULL) 
        {
            return l2;
        }
        if(l2==NULL) 
        {
            return l1;
        }
        Node* head=NULL;
        head = new Node();
        Node* p = head;
        Node* p1 = l1;
        Node* p2 = l2;
        while(p1 != NULL && p2 != NULL)
        {
            if(p1 -> data < p2 -> data)
            {
                p->next=p1;
                p1=p1->next;
            }
            else{
                p->next=p2;
                p2=p2->next;
            }
            p=p->next;
        }        
        if(p1 != NULL)
        {
            p->next=p1;
        }
        if(p2 != NULL){
            p->next=p2;
            
        }
        return (head->next);
    }
int main()
{
    Node* head1=NULL;
    Node* added =NULL;
    int n;
    cout<<"enter the sorted numbers in list 1 or enter -1 to end inserting : \n";
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        else{
            if(head1 == NULL)
            {
                head1 = insert(n);
                if(head1 != NULL)
                {
                    added = head1;
                }
            }
            else{
                added->next=insert(n);
                if(added->next !=NULL)
                {
                    added = added->next;
                }
            }
        }
    }
    Node* head2=NULL;
    Node* added2 =NULL;
    int n2;
    cout<<"enter the number in list 2 or enter -1 to end inserting : \n";
    while(1)
    {
        cin>>n2;
        if(n2==-1)
        {
            break;
        }
        else{
            if(head2 == NULL)
            {
                head2 = insert(n2);
                if(head2 != NULL)
                {
                    added2 = head2;
                }
            }
            else{
                added2->next=insert(n2);
                if(added2->next !=NULL)
                {
                    added2 = added2->next;
                }
            }
        }
    }
    Node* Merged=NULL;
    Merged=mergeTwoLists(head1,head2);
    printLinkedList(Merged);
    return 0;
}
