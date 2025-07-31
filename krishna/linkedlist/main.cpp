#include<iostream>
using namespace std;

struct Node{
   int data;
   Node*next;
};

class LinkedList{
private:
   Node*head;
public:
    LinkedList(){
    head=nullptr;
    }
    void insertAtEnd(int value)
    {
    Node*newNode=new Node{value,nullptr};
         if (head == nullptr){
      head = newNode;
      } else{
Node*temp = head;
while(temp->next=newNode;)
}
}
void insertAtBeginning(int value){
Node*newNode=new Node{value,head};
head = newNode;
}

void deleteNode(int value){
if(head == nullptr){
cout<<"List is empty!\n";
return;
}
if(head->data==value){
Node*toDelete = head;
head = head->next;
delete toDelete;
cout<<"Deleted"<<value<<endl;
return;
}
Node*temp=head;
while(temp->next!= nullptr&&temp->data != value){
        temp = temp->next;
}
if (temp->next == nullptr){
        return;
}
 Node* toDelete = temp->next;
 temp->next = temp->next->next;
 delete toDelete;
 cout << "Deleted"<<value<<endl;
}
void display() {
    if (head == nullptr) {
            cout << "List is empty!n";
    return;

}
Node* temp = head;
cout<<"List: ";
while(temp !=nullptr){
        cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL\n";
}
~LinkedList(){
    Node*current=head;
    while(current!=nullptr){
            Node*next=current->next;
    delete current;
    current=next;
    }
}
};
int main(){
  LinkedList l;
  l.insertAtEnd(10);
  l.insertAtEnd(20);
  l.insertAtBeginning(5);
  l.display();
  l,deleteNode(10);
  l.display();
  return 0;
}


