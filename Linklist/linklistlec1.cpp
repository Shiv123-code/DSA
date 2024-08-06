#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //create constructor for create the node to pass value in new node
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//InseratAttail in linklist
void insertattail(Node*&tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
//InseratAtHead in Linklist
void insertathead( Node*&head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node*& head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//insert the element in middle 
void insertatmiddle(Node*& head,int pos,int d)
{
    if(pos==1){
        insertathead(head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    //creating the node to insert in middle
    Node*newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;
}
 int main(){
    //create the starting new node
       Node*node1=new Node(10);
       //cout<<node1->data<<endl;
      // cout<<node1->next<<endl; 
       Node*head=node1;
       Node*tail=node1;
       //insertattail
       print(head);
       insertattail(tail,12);
       print(head);
       insertattail(tail,15);
       print(head);
       insertatmiddle(head,1,22);
       print (head);
       //insettat head print
       /*print(head);
       insertathead(head,12);
       print(head);
       insertathead(head,15);
       print(head);*/
 }
