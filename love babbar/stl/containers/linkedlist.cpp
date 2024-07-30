// linked in 
#include <iostream>
#include <list>
using namespace std;

int main(){
    
    list<int>myList;
    myList.push_back(10);
    myList.push_back(100);
    myList.push_back(200);
    myList.push_back(300);
    myList.push_back(400);

    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;

    // myList.push_front(40);
    // myList.push_front(50);

    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;

    // cout<<myList.front();

    myList.insert(myList.begin(),100);
    //100->10->100->200->300->400
    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;
    myList.remove(100);
    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;
    //using iterator traverse through linked list
    list<int>:: iterator it= myList.begin();
    while( it!=myList.end()){
        cout<<*it<<" ";
        it++;
    }

    // EMPTY()
    if(myList.empty()==true){
        cout<<" list is empty";
    }
    else{
        cout<<" list is not empty";
    }

    return 0;
}