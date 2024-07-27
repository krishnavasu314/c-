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


int main(){
    newNode* first=new newNode(10);

}