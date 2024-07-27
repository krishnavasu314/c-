#include<iostream>
using namespace std;

class newNode{
    public:
        int data;
        newNode* next;
        //consturctor
        newNode(int value){
            this->data=value;
            this->next=NULL;
        }        
        
};

newNode* insertAtHead(int value,newNode* &head,newNode* &tail){
    //chech whether existing list is empty or not 
    if(head==NULL && tail==NULL){
        // it is empty ll so head and tail ponint to null
        newNode* Node=new newNode(value);
        head=Node;
        tail=Node;    
    }
    else{
        newNode* Node=new newNode(value);
        Node->next=head;
        head=Node;
    }
    
    return head;
}

void print(newNode* head){
    newNode* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        }cout<<"NULL";
        


}

int main(){
    newNode* head=NULL;
    newNode* tail=NULL;
    head=insertAtHead(10,head,tail);
    print(head);
    cout<<"hi"<<endl;


}